#include <stdio.h> 
int length_of_string(char* p) {
    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }

    return count;
}
int main() {
    char str[100];
    int length;

    printf("Enter any string : ");
    scanf("%c",str);
    length = length_of_string(str);

    printf("The length of the given string : %d", length);

    return 0;
}