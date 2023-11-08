#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

char Menu(char option) {
    printf("Menu Options:\n");
    printf("A: Specify the filename to be imported\n");
    printf("B: Display the total number of records in the file\n");
    printf("C: Find the date and time of the timeslot with the fewest steps\n");
    printf("D: Find the date and time of the timeslot with the largest number of steps\n");
    printf("E: Find the mean step count of all the records in the file\n");
    printf("F: Find the longest continuous period where the step count is above 500 steps\n");
    printf("Q: Quit\n");
    printf("Enter choice: ");
    scanf("%s", &option);
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
    int highest = 0;
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

int optionE(FITNESS_DATA fitness[1000], int counter) {
    int total = 0;
    for (int i=0; i<counter; i++){
        total += fitness[i].steps;
    }
    int mean = total / counter;
    printf("Mean step count: %d\n", mean);
    return 0;
}

int optionQ(){
    exit(0);
}

// Complete the main function
int main() {
    char option;
    option = Menu(option);

    FITNESS_DATA fitness[1000];
    int buffer_size = 500;
    char line_buffer[buffer_size];
    int counter = 0;

    char filename [] = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
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

    if (option == "B"){
       optionB(counter); 
    }
    
    optionC(fitness, counter);
    optionD(fitness, counter);
    optionE(fitness, counter);
    optionQ();
    return 0;
}