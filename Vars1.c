#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 35;

    // %s char
    // %d integer

    printf("There once was a man called %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge++;

    printf("He really liked the name %s\nbut did not like being %d.\n", characterName, characterAge);

    return 0;
}