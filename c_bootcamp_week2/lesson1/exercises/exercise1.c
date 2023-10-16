#include <stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (num<0){
        printf("Number is negative");
    }
    else if (num ==0){
        printf("Number is zero");
    }
    else{
        printf("Number is positive");
    }
    return 0;
}