#include <stdio.h>

typedef struct{
    double a,b;
}point;

int main(){
    point points[10];
    for (int i=0; i<10; i++){
        points[i].a = i;
        points[i].b = i*3;
    }
    for (int i=0; i<10; i++){
        printf("(%.2lf, %.2lf)\n", points[i].a, points[i].b);
    }
    return 0;
}