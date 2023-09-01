#include <stdio.h>
#include <stdlib.h>
#include "WriteFiles.h"

int main()
{
    system("clear");
    demo();
    return 0;
}

void demo()
{
    // Open
    //FILE *fPointer = fopen("employees.txt", "w"); // write
    FILE *fPointer = fopen("employees.txt", "a"); // amend

    // Write to file
    //fprintf(fPointer, "Jim, Salesman\nPam, Receptionist\nPaul, Developer\n");
    //fprintf(fPointer, "Overridden");
    fprintf(fPointer, "Rory, Tech\nCaitlin, Boss\nPaula, Trainee\n");

    // Close
    fclose(fPointer);
}