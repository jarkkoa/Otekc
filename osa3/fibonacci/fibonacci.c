#include <stdlib.h>
#include "fibonacci.h"

unsigned int *fib_jono(unsigned int n)
{
    unsigned int i = 0;
    int previous2 = 0;
    int previous = 1;
    int result = 1;
    unsigned int *jono = malloc(n * sizeof(unsigned int));

    if (n >= 1)
    {
        jono[0] = 0;
    }

    if (n >= 2)
    {
        jono[1] = 1;
    }

    for (i = 2; i < n; i++)
    {
        result = previous + previous2;

        jono[i] = result;

        previous2 = previous;
        previous = result;
    }

    return jono;
}
