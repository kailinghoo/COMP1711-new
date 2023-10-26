#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "input.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int nums[200];
    int counter=0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        nums[counter] = atoi(line_buffer);
        printf("%d\n", (nums[counter]));
        counter ++;
    }

    fclose(file);
    return 0;
}