#include <stdio.h>

int main(){
    int array[5] = {5,32,7,25,3};
    int a =0, counter = 0;
    for (a; a<5; a++){
        counter += array[a];
    }
    printf("%d\n",counter);
    return 0;
}