#include <stdio.h>

int main(){
    int mark;
    printf("Enter your score");
    scanf("%d", &mark);
    if (mark <50 && mark >=0){
        printf("You have failed\n");
    }
    else if (mark >=70 && mark <=100){
        printf("You have got a distinction\n");
    }
    else if (mark>=50 && mark <=10){
        printf("You have passed\n");
    }
    else {
        printf("Enter a valid score\n");
    }
    return 0;
}