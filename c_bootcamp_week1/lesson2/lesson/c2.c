#include <stdio.h>

int main() {
    int num = 5;
    int guess = 0;
    while (guess!= num){
        printf("Enter a number");
        scanf("%d", &guess);
        if (guess>num){
            printf("Too high\n");
        }
        else if (guess<num){
            printf("Too low\n");
        }
        else{
            printf("Correct\n");
        }
    }
    return 0;
}