#include <stdio.h>

float volSphere(float radius)
{
    float volume = radius * radius * radius * 3.141592653589 * 4 / 3;
    return volume;
}

int main ()
{
    float radius, volume;
    printf("Enter the radius");
    scanf("%f",&radius);
    volume = volSphere(radius);
    printf("%f",volume);
}