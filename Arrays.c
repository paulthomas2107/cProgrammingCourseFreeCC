#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    printf("%d\n", luckyNumbers[0]);
    printf("%d\n", luckyNumbers[2]);

    luckyNumbers[3] = 200;
    printf("%d\n", luckyNumbers[3]);

    int unknownNumbers[10];
    unknownNumbers[1] = 80;
    unknownNumbers[0] = 90;
    printf("%d\n", unknownNumbers[1]);
    printf("%d\n", unknownNumbers[0]);

    char phrase[] = "Paul Thomas";
    printf("%s\n", phrase);
    

    return 0;
}