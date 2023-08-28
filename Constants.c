#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Constamts cannot be modified
    const float PI = 3.14;
    const char KEY1[]= "paul_key";

    printf("%f %s\n", PI, KEY1);

    return 0;
}