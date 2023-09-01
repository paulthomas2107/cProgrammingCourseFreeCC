#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int age = 30;
    int *pAge = &age; // pointer is age - same type int

    double gpa = 3.4;
    double *pGpa = &gpa; // pointer to GPA - same type double

    char grade = 'A';
    char *pGrade = &grade; // pointer to grade - same type char

    // Pointers are memory addresses
    printf("Age's memory address is %p\n", &age); // &age is a pointer
    printf("GPA's memory address is %p\n", pGpa);
    printf("Grade's memory address is %p\n", pGrade);

    // Dereferening pointers
    // All pointers are memory addresses
    printf("%d\n", *pAge); // 30....dereference
    printf("%d\n", *&age); // 30....dereference
    printf("%d\n", *&*&age); // 30

    return 0;
}
    