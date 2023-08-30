#include <stdio.h>
#include <stdlib.h>
#include "Function101.h"

int main()
{
    system("clear");

    printf("Top...\n");
    sayHi();
    sayHiWithName("Paul");
    printf("Bottom...\n");
    printf("%.3f\n", cube(3.0));
    printf("%s\n", getName());

    return 0;
}

void sayHi()
{
    printf("Hi !\n");
}

void sayHiWithName(char name[])
{
    printf("Hi %s!\n", name);
}

double cube(double number)
{
    return number * number * number;
}

char *getName()
{
    return "Paul T";
}
