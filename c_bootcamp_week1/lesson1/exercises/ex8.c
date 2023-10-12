#include <stdio.h>

int main(){
    int num;
    int factorial = 1;
    int i;
    printf("Enter a number to find the factorial: ");
    scanf("%d",&num);
    for (i = 1; i <= num; ++i){
        factorial = factorial * i;
    }
    printf("%d\n", factorial);
    return 0;
}