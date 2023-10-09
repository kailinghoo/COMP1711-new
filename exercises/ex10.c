#include <stdio.h>

int main(){
    int principal;
    float rate;
    int time;
    printf("What is the inital amount: ");
    scanf("%d", &principal);
    printf("What is the interest rate: ");
    scanf("%f", &rate);
    printf("How many years: ");
    scanf("%d", &time);
    float final = principal*(1+(rate*time));
    printf("Final amount: %.2f\n", final);
    return 0;
}