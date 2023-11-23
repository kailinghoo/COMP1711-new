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

// Complete the main function
int main() {
    FITNESS_DATA fitness[1000];
    int steps_array[500];
    int buffer_size = 500;
    char line_buffer[buffer_size];
    int counter = 0;
    int a, i, j;

    char filename [1000];
    printf("Input filename: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: invalid file\n");
        return 1;
    }
    
    char date[11];
	char time[6];
	char steps[10];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        tokeniseRecord(line_buffer,",",date,time,steps);
        if (date[0] != '\0' && time[0] != '\0' && steps[0]!= '\0'){
            strcpy(fitness[counter].date,date);
            strcpy(fitness[counter].time,time);
            fitness[counter].steps = atoi(steps);
            steps_array[counter] = atoi(steps);
            memset(date,0,strlen(date));
            memset(time,0,strlen(time));
            memset(steps,0,strlen(steps));
            if (fitness[counter].steps == 0){
                printf("Error: invalid file\n");
                return 1;
            }
            counter ++;
        }
        else{
            printf("Error: invalid file\n");
            return 1;
        }
    }
    fclose(file);

    strcat(filename, ".tsv");
    FILE *file2 = fopen (filename, "w");

    for (i=0; i<counter; i++){
        for (j=0; j<counter; j++){
            if (steps_array[i] > steps_array[j]) {
                a = steps_array[i];
                steps_array[i] = steps_array[j];
                steps_array[j] = a;
            }
        }
    }
    for (i=0;i<counter;i++){
        for (j=0;j<counter;j++){
            if (steps_array[i]==fitness[j].steps){
                fprintf(file2,"%s\t%s\t%d\n", fitness[j].date, fitness[j].time,fitness[j].steps);
                break;
            }
        }
    }
    fclose(file2);
    return 0;
}