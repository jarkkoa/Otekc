#include <stdio.h>
#include <limits.h>
#include "bitit.h"

void scharBitit(signed char x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    printf("%i\n", x);

    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            oneCount++;
            printf("%i", 1);
        }
        else
        {
            zeroCount++;
            printf("%i", 0);
        }
    }

    printf("\n%i\n%i\n", zeroCount, oneCount);
}

void shortBitit(short int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    printf("%i\n", x);

    for (i = (CHAR_BIT * sizeof(short int)) - 1; i >= 0 ; i--)
    {
        if ((x >> i) & 1)
        {
            oneCount++;
            printf("%i", 1);
        }
        else
        {
            zeroCount++;
            printf("%i", 0);
        }
    }

    printf("\n%i\n%i\n", zeroCount, oneCount);
}

void intBitit(int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    printf("%i\n", x);

    for (i = (CHAR_BIT * sizeof(int)) - 1; i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            oneCount++;
            printf("%i", 1);
        }
        else
        {
            zeroCount++;
            printf("%i", 0);
        }
    }

    printf("\n%i\n%i\n", zeroCount, oneCount);
}

void longBitit(long int x)
{
    int i;
    int zeroCount = 0;
    int oneCount = 0;
    printf("%li\n", x);

    for (i = (CHAR_BIT * sizeof(long int) - 1); i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            oneCount++;
            printf("%i", 1);
        }
        else
        {
            zeroCount++;
            printf("%i", 0);
        }
    }

    printf("\n%i\n%i\n", zeroCount, oneCount);
}