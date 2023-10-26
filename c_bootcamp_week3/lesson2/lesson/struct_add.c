#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    struct student new_student;
    char name[20];
    printf("Name: ");
    scanf("%s",new_student.name);
    printf("student ID: ");
    scanf("%s",new_student.student_id);
    printf("mark: ");
    scanf("%d",&new_student.mark);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}