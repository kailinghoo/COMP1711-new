#include <stdio.h>

int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (num %5 == 0 && num %4 ==0){
        printf("Divisible by both 4 and 5\n");
    }
    else if (num%5==0){
        printf("Divisible by only 5\n");
    }
    else if (num%4==0){
        printf("Divisible by only 4\n");
    }
    else {
        printf("Not divisible by 4 or 5\n");
    }
    return 0;
}