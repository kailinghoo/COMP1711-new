#include <stdio.h>

int main(){
    char firstString[15];
    char secondString[15];
    char swaphold[15];
    printf("enter first string ");
    scanf("%s", &firstString);
    printf("Enter second string ");
    scanf("%s", &secondString);
    strcpy(swaphold,firstString);
    strcpy(firstString, secondString);
    strcpy(secondString, swaphold);
    printf("First string: %s\n", firstString);
    printf("Second string: %s\n", secondString);
    int firstnum;
    int secondnum;
    int swap;
    printf("enter first number ");
    scanf("%d", &firstnum);
    printf("Enter second number ");
    scanf("%d", &secondnum);
    swap = firstnum;
    firstnum = secondnum;
    secondnum = swap;
    printf("First number: %d\n", firstnum);
    printf("Second number: %d\n", secondnum);
    return 0;
}