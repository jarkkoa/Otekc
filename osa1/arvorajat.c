#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long int i;
    long int current;

    for (i = 1; i < argc; i++)
    {
        current = atoi(argv[i]);
        printf("%li: ", current);

        if (current < INT_MIN || current > INT_MAX)
        {
            return 0;
        }
        if (CHAR_MIN <= current && current <= CHAR_MAX)
        {
            printf("signed char, ");
        }
        if (0 <= current && current <= UCHAR_MAX)
        {
            printf("unsigned char, ");
        }
        if (SHRT_MIN <= current && current <= SHRT_MAX)
        {
            printf("short int, ");
        }
        if (0 <= current && current <= USHRT_MAX)
        {
            printf("unsigned short int, ");
        }
        if (INT_MIN <= current && current <= INT_MAX)
        {
            printf("int");
        }

        printf("\n");
    }

    return 0;
}