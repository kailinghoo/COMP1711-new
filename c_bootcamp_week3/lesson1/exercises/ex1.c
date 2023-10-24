#include <stdio.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("");
        return 1;
    }

    int number;
    printf("How many numbers?");
    scanf("%d",&number);
    for (int i = 1; i < number+1; i++) {
        fprintf(file, "%d\n", i*i);
    }

    fclose(file);
    return 0;
}