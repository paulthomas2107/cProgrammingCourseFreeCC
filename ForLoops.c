#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int nums[] = {1, 4, 5, 6, 7, 8, 10, 11, 217, 4, 2, 1, 222};

    for (int i = 0; i < *(&nums + 1) - nums; i++) // counts thru array
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}