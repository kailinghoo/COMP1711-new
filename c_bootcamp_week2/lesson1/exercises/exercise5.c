#include <stdio.h>

int main() {
    int option;
    printf("Enter a menu number");
    scanf("%d",&option);

    switch (option)
    {
        case 1:     printf ("Menu 1 has been selected\n");
        break;

        case 2:     printf ("Option 2 has been selected\n");
        break;

        case 3:     printf ("Menu 3 has been selected\n");
        break;

        case 4:     printf ("Option 4 has been selected\n");
        break;

        case 5:     printf ("Option 5 has been selected\n");
        break;

        default:    printf ("Invalid menu number\n");
    }
    return 0;
}