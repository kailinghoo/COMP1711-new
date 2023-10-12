#include <stdio.h>

int main(){
    int array[5] = {5,32,7,25,3};
    int newarray[5];
    int count = 0, a = 0;
    for (count; count<5; count++){
        newarray[count] = array[5-count-1];
    }
    for (a; a<5; a++){
        printf("%d,",newarray[a]);
    };
    printf("\n");
    return 0;
}