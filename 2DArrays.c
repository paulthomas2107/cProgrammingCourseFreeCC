#include <stdio.h>
#include <stdlib.h>
#include "2DArrays.h"

int main()
{
    system("clear");

    arrayTest();

    return 0;
}

void arrayTest()
{
    // 2D array
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    printf("%d\n", nums[0][0]); // 1
    printf("%d\n", nums[2][1]); // 8

    int nums2[2][4];
    nums2[0][3] = 16;
    printf("%d\n", nums2[0][3]); // 16

    // nested four loop
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }
}