#include <stdio.h>
#include <stdlib.h>
#include "ex3.h"

int main(){
    point points[10];
    float mean;
    for (int i=0; i<10; i++){
        points[i].a = i;
        points[i].b = i*3;
    }
    int total = 0;
    int manhattan_distance = 0;
    for (int i=0; i<10; i++){
        if (i != 9){
            manhattan_distance = abs(points[i].a - points[i+1].a) + abs(points[i].b - points[i+1].b);
            total += manhattan_distance;
        }
    }
    mean = total / 10;
    printf("%f\n", mean);
    return 0;
}