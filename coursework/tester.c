#include <stdio.h>
#include <math.h>

int main(){
    float mean = 101.9615;
    float remainder = mean - (int)mean;
    int result;
    if (remainder < 0.5){
        result = (int)mean;
    }
    else{
        result = (int)mean + 1;
    }
    printf("Mean step count: %d\n", result);
    return 0;
}