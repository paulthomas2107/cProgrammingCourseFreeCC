#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    // While loop
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }

    //  Do while loop
    index = 1;
    do
    {
        printf("%d\n", index);
        index++;
    } while (index <= 5);

    // for loop
    for (int i = 0; i < 99; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
