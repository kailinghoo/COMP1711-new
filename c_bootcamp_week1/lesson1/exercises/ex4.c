#include <stdio.h>

int main() {
    float radius;
    printf("What is the radius: ");
    scanf("%f", &radius);
    float area = 3.14159265 * radius * radius;
    printf("Area of the circle is %.2f\n", area);
    return 0;
}