#include <stdio.h>
int main() {
    float length;
    float width;
    float area;
    printf("First length:");
    scanf("%f",&length);
    printf("Second length:");
    scanf("%f",&width);
    area = length*width;
    printf("Area = %.2f\n",area);
    return 0;
}