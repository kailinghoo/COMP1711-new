#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "a+");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    int counter = 0;
    float average = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        average = (average+atof(line_buffer));
        counter = counter + 1;
    }

    average = average / counter;
    fprintf(file,"%f", average);

    fclose(file);
    return 0;
}