#include <stdio.h>

int isPrime(int num){
    int a;
    for (a=2;a<num/2; a++){
        if (num%a == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num, answer;
    printf("Enter a number");
    scanf("%d",&num);
    answer = isPrime(num);
    printf("%d\n",answer);
    return 0;
}