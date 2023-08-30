#include <stdio.h>
#include <stdlib.h>
#include "IfStats.h"

int main()
{
    system("clear");

    printf("%d\n", max(10, 20, 30));
    printf("%d\n", max(40, 10, 20));
    printf("%d\n", max(10, 10, 10));
    printf("%d\n", max(11, 12, 13));
    printf("%d\n", max(12, 13, 11));
    printf("%d\n", max(13, 11, 12));
    printf("%d\n", max(1, 2, 3));

    if (1 > 2 || 5 > 5) // or
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if (3 == 3)
    { // equal
        printf("True\n");
    }

    if (3 != 2) // not equal
    {
        printf("False\n");
    }

    if (!(3 > 2))
    {
        printf("** False\n"); // see nothing
    }

    if (!(3 < 2))
    {
        printf("** False\n"); // see nothing
    }

    return 0;
}

int max(int num1, int num2, int num3) // uses && and
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}