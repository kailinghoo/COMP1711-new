#include <stdio.h>

int main(){
    int array[6] = {5,7,7,25,3,5};
    int repeatarray[6];
    int a = 0, b = 1, count = 0;
    for (a; a<6; a++){
        for (b; b<6; b++){
            printf("%d", b);
            if (array[a]=array[b]){
                repeatarray[count] = array[a];
                count += 1;
            }
        }
    }
    for (int c = 0; c<6; c++){
        printf("%d\n",repeatarray[c]);
        return 0;
    }
}