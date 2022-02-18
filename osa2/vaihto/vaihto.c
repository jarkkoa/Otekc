#include "vaihto.h"

void vaihda(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

void jarjesta(int *a, int *b, int *c)
{
    while (*a > *b || *a > *c || *b > *c)
    {
        if (*a > *b)
        {
            vaihda(a, b);
        }
        if (*a > *c)
        {
            vaihda(a, c);
        }
        if (*b > *c)
        {
            vaihda(b, c);
        }
    }
}
