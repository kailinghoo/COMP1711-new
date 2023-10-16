#include <stdio.h>

int main(){
    int temp;
    printf("Enter the temperature");
    scanf("%d", &temp);
    if (temp >= -10 && temp <= 40){
        printf("Temperature is valid\n");
    }
    else {
        printf("Temperature not valid\n");
    }
    return 0;
}