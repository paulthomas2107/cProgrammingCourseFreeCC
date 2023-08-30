#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"

int main()
{
    system("clear");

    struct Student student1;
    student1.id = 1001;
    student1.age = 22;
    student1.GPA = 3.2;
    strcpy(student1.name, "Jim Henson"); // move text in
    strcpy(student1.major, "Business");
    printf("%.2f\n", student1.GPA);
    printf("%s\n", student1.name);

    struct Student student2;
    student2.id = 1002;
    student2.age = 21;
    student2.GPA = 3.4;
    strcpy(student2.name, "Pam Potts"); // move text in
    strcpy(student2.major, "Art");
    printf("%.2f\n", student2.GPA);
    printf("%s\n", student2.name);

    return 0;
}