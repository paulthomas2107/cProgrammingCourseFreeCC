#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    // Constamts cannot be modified
    const float PI = 3.14;
    const char KEY1[]= "paul_key";
    const int FAV_NUM = 123;

    printf("%f %s %d\n", PI, KEY1, FAV_NUM);

    return 0;
}