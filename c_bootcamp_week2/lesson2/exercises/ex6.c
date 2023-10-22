#include <stdio.h>
#include <string.h>

float calculator(float num1, float num2, char operation[1]){
    float answer;
    if (strcmp("/",operation)==0){
        answer = num1/num2;
    }
    else if (strcmp("*", operation)==0){
        answer = num1*num2;
    }
    else if (strcmp("+", operation)==0){
        answer = num1 + num2;
    }
    else if (strcmp("-", operation)==0){
        answer = num1 - num2;
    }
    else{
        printf("Not a valid operator");
    }
    return answer;
}

int main(){
    float num1, num2;
    char operation[1];
    printf("Enter number 1");
    scanf("%f",&num1);
    printf("Enter number 2");
    scanf("%f", &num2);
    printf("Operation: ");
    scanf("%s", &operation);
    printf("%f\n",calculator(num1, num2, operation));
    return 0;
}