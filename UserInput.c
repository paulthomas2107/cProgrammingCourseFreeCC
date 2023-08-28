#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system("clear");

    /*
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // pointer & to age
    printf("You are %d years old.\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); // pointer & to gpa
    printf("You have a GPA of %f.\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%s", &grade); // pointer & to grade
    printf("Your grade is %c.\n", grade);

    */
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); // no need for & - use this as default
    printf("Your name is %s.\n", name);

    return 0;
}