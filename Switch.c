#include <stdio.h>
#include <stdlib.h>
#include "Switch.h"

int main()
{
    system("clear");

    char grade = 'B';

    checkGrade(grade);

    return 0;
}

void checkGrade(char grade)
{
    switch (grade)
    {
    case 'A':
        printf("You did great\n");
        break;
    case 'B':
        printf("You did good\n");
        break;
    case 'C':
        printf("You did ok\n");
        break;
    case 'D':
        printf("You did badly\n");
        break;
    case 'F':
        printf("You Failed\n");
        break;
    default:
        printf("Unknown grade\n");
        break;
    }
}