#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalidrome(char* string)
{
    unsigned int i;
    char a;
    char b;

    for (i = 0; i < strlen(string); i++)
    {

        a = tolower(string[i]);
        b = tolower(string[strlen(string)-1-i]);

        if (a != b)
        {
            return 0;
        }
    }

    return 1;
}


int main(int argc, char *argv[])
{
    int i;
    for (i = 1; i < argc; i++)
    {
        if (isPalidrome(argv[i]) == 1)
        {
            printf("\"%s\": on palindromi\n", argv[i]);
        }
        else
        {
            printf("\"%s\": ei ole palindromi\n", argv[i]);
        }
    }

    return 0;
}
