#include <stdio.h>
#include <stdlib.h>
#include "ReadFiles.h"

int main()
{
    system("clear");
    demo();
    return 0;
}

void demo()
{

    char lineHolder[255];

    // Open
    FILE *fPointer = fopen("employees.txt", "r"); // read mode

    // Loop through file
    while (fgets(lineHolder, sizeof(lineHolder), fPointer))
    {
        printf("%s", lineHolder);
    }
    // Close
    fclose(fPointer);
}