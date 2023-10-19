#include <stdio.h>

float circleArea(float radius)
{
    float area = radius * radius * 3.141592653589;
    return area;
}

int main ()
{
    float radius, area;
    printf("Enter the radius");
    scanf("%f",&radius);
    area = circleArea(radius);
    printf("%f",area);
}