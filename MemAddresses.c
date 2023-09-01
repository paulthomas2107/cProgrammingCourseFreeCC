#include <stdio.h>
#include <stdlib.h>
#include "MemAddresses.h"

int main()
{
    system("clear");
    run();
    return 0;
}

void run()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\nGPA: %p\nGrade: %p\n", &age, &gpa, &grade);
};