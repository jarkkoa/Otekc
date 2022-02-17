#include <limits.h>
#include "bitit.h"

void kaannaScharBitit(signed char *x)
{
    int i;
    signed char copy = *x;

    for (i = 0; i <= CHAR_BIT / 2; i++)
    {
        if ((copy >> i) & 1)
        {
            *x = *x | (1 << (CHAR_BIT - i - 1));
        }
        else
        {
            *x = *x & ~(1 << (CHAR_BIT - i - 1));
        }

        if ((copy >> (CHAR_BIT - 1 - i)) & 1)
        {
            *x = *x | (1 << i);
        }
        else
        {
            *x = *x & ~(1 << i);
        }
    }
}

void kaannaShortBitit(short *x)
{
    int i;
    int size = CHAR_BIT * sizeof(short);
    short copy = *x;

    for (i = 0; i <= size / 2; i++)
    {
        if ((copy >> i) & 1)
        {
            *x = *x | (1 << (size - i - 1));
        }
        else
        {
            *x = *x & ~(1 << (size - i - 1));
        }

        if ((copy >> (size - 1 - i)) & 1)
        {
            *x = *x | (1 << i);
        }
        else
        {
            *x = *x & ~(1 << i);
        }
    }
}

void kaannaIntBitit(int *x)
{
    int i;
    int size = CHAR_BIT * sizeof(int);
    int copy = *x;

    for (i = 0; i <= size / 2; i++)
    {
        if ((copy >> i) & 1)
        {
            *x = *x | (1 << (size - i - 1));
        }
        else
        {
            *x = *x & ~(1 << (size - i - 1));
        }

        if ((copy >> (size - 1 - i)) & 1)
        {
            *x = *x | (1 << i);
        }
        else
        {
            *x = *x & ~(1 << i);
        }
    }
}

void kaannaLongBitit(long *x)
{
    int i;
    int size = CHAR_BIT * sizeof(long);
    long copy = *x;

    for (i = 0; i <= size / 2; i++)
    {
        if ((copy >> i) & 1L)
        {
            *x = *x | (1L << (size - i - 1));
        }
        else
        {
            *x = *x & ~(1L << (size - i - 1));
        }

        if ((copy >> (size - 1 - i)) & 1L)
        {
            *x = *x | (1L << i);
        }
        else
        {
            *x = *x & ~(1L << i);
        }
    }
}