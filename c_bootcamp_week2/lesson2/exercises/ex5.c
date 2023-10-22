#include <stdio.h>

char concat_strings(char *str1, char *str2) {
    char str3[100];
   
    int i = 0, j = 0;
   
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    printf("%s",str3);
}
int main() {
    char *str1 = "HAppy123", *str2 = "Sad321";
    concat_strings(str1, str2);

    return 0;
}