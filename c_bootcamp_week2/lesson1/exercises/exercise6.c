#include <stdio.h>

int main(){
    int num = 0;
    while (num != -1){
        printf("Enter a number");
        scanf("%d", &num);
    }
    printf("Code has been terminated\n");
    return 0;
}