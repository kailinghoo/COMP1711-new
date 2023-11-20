#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

void initializeArrayRandom(int a[3][4]) {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 10; // Generates random values between 0 and 10
        }
    }
}

int main(){
    return 0;
}