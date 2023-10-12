#include <stdio.h>

int main(){
    int array[5] = {5,32,7,45,3};
    int max = 0;
    int a=0;
    for (a; a<5; a++){
        if (array[a]>max){
            max = array[a];
        }
    }
    printf("Max = %d\n",max);
    return 0;
}