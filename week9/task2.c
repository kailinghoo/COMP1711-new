#include <stdlib.h>
#include <stdio.h>

int main(){
    char* address = malloc(200 * sizeof(char));
    int* data = malloc(70 * sizeof(int));
    int num;
    printf("Enter a size for samples");
    scanf("%d", &num);
    double* samples = malloc(num * sizeof(double));
}