#include <stdio.h>

int main() {
    int a = 0;
    for (a; a<1000; a++){
        if (a%11 == 0){
            printf("%d\n",a);
        }
        
    }

    return 0;
}