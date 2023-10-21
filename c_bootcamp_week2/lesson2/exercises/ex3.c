#include <stdio.h> 
int length_of_string(char *str) {
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}
int main() {
    char *str = "HAppy123";
    int length=length_of_string(str);

    printf("The length of the given string : %d", length);

    return 0;
}