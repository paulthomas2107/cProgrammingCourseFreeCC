#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Hello\nWorld\n");
    printf("Hello\"World\"\n");

    printf("%d\n", 500);                       // Integer
    printf("My fave %s is %d\n", "word", 100); // String & Integer
    printf("%f is a float\n", 123.4567);       // Float

    int favNum = 90;
    printf("FavNum is %d\n", favNum); // Int

    char coda = 'x';
    printf("I have a %c\n", coda); // char

    return 0;
}