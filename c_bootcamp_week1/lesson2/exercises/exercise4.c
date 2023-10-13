#include <stdio.h>

int main(){
    int array[5] = {5,32,7,45,3};
    int temp=array[4];
    for (int a=4; a>0; a=a-1){
        array[a]=array[a-1];
    }
    array[0]=temp;
    for (int b=0; b<5; b++){
        printf("%d\n",array[b]);
    }
    return 0;
}