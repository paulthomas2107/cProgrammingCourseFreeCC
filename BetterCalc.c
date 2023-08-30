#include <stdio.h>
#include <stdlib.h>
#include "BetterCalc.h"

int main()
{
    system("clear");

    double num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    calc(num1, num2, op);

    return 0;
}

void calc(double num1, double num2, char op)
{
    if (op == '+')
    {
        printf("%f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%f\n", num1 * num2);
    }
    else if (op == '/')
    {
        printf("%f/n", num1 / num2);
    }
    else
    {
        printf("Invalid Operator !\n");
    }
}