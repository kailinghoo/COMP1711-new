#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "FitnessDataStruct.h"

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

char Menu() {
    char option;
    printf("Menu Options:\n");
    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");
    printf("Enter choice: ");
    scanf("%c",&option);
    return option;
}

int optionB(int counter) {
    printf("Total records: %d\n", counter);
    return 0;
}

int optionC(FITNESS_DATA fitness[1000], int counter) {
    int lowest = 1000000;
    char date[11];
	char time[6];
    for (int i=0; i<counter; i++){
        if (fitness[i].steps < lowest){
            lowest = fitness[i].steps;
            strcpy(date, fitness[i].date);
            strcpy(time, fitness[i].time);
        }
    }
    printf("Fewest steps: %s %s\n", date, time);
    return 0;
}

int optionD(FITNESS_DATA fitness[1000], int counter) {
    int highest = -10000000;
    char date[11];
	char time[6];
    for (int i=0; i<counter; i++){
        if (fitness[i].steps > highest){
            highest = fitness[i].steps;
            strcpy(date, fitness[i].date);
            strcpy(time, fitness[i].time);
        }
    }
    printf("Highest steps: %s %s\n", date, time);
    return 0;
}

int optionE(FITNESS_DATA fitness[1000], float counter) {
    float total = 0;
    for (int i=0; i<counter; i++){
        total += fitness[i].steps;
    }
    float mean = total / counter;
    int result = mean + 0.5;
    printf("Mean step count: %d\n", result);
    return 0;
}

int optionF(FITNESS_DATA fitness[1000], int counter) {
    char date[11];
	char timeStart[6];
    char timeEnd[6];
    char tempStart[6];
    char tempEnd[6];
    int highest = 0;
    int counter2 = 0;
    for (int i=0; i<counter; i++){
        if (fitness[i].steps > 500){
            strcpy(date, fitness[i].date);
            strcpy(tempStart, fitness[i].time);
            for (int j=i; j<counter;j++){
                if (fitness[j].steps > 500){
                    counter2++;
                    strcpy(tempEnd,fitness[j].time);
                }
                else{
                    if (counter2 > highest){
                        strcpy(timeEnd, tempEnd);
                        strcpy(timeStart, tempStart);
                        highest = counter2;
                    }
                    counter2 = 0;
                    break;
                }
            }
        }
    }
    printf("Longest period start: %s %s\n", date, timeStart);
    printf("Longest period end: %s %s\n", date, timeEnd);
    return 0;
}

// Complete the main function
int main() {
    char option;
    option=Menu();

    char filename [100];
    FITNESS_DATA fitness[1000];
    int buffer_size = 500;
    char line_buffer[buffer_size];
    int counter = 0;

    while (option != 'Q'){
        if (option == 'A'){
            printf("Input filename: ");
            scanf("%s", filename);
            FILE *file = fopen(filename, "r");
            if (file == NULL) {
                printf("Error: Could not find or open the file.\n");
                return 1;
            }

            char date[11];
            char time[6];
            char steps[10];

            while (fgets(line_buffer, buffer_size, file) != NULL) {
                tokeniseRecord(line_buffer,",",date,time,steps);
                strcpy(fitness[counter].date,date);
                strcpy(fitness[counter].time,time);
                fitness[counter].steps = atoi(steps);
                counter ++;
            }
            fclose(file);
            printf("File sucessfully loaded.\n");
            Menu();
            scanf("%c",&option);
        }
        if (option == 'B'){
            optionB(counter);
        }
        else if (option == 'C') {
            optionC(fitness, counter);
        }
        else if (option == 'D'){
            optionD(fitness, counter);
        }
        else if (option =='E'){
            optionE(fitness, counter);
        }
        else if (option == 'F'){
            optionF(fitness, counter);
        }
        else{
            printf("Invalid choice. Try again.\n");
        }
        Menu();
        scanf("%c", &option);
    }
    return 0;
}