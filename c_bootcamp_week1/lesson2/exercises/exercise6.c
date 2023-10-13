#include <stdio.h>

int main(){
    int array1[3]={1,2,3};
    int array2[3]={4,5,6};
    int array3[6];
    for (int a=0; a<6; a++){
        if (a<3){
            array3[a]=array1[a];
        }
        else{
            array3[a]=array2[a-3];
        }
    }
    for (int b = 0; b<6; b++){
        printf("%d\n",array3[b]);
    }
    return 0;
}