#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    int a, b, maxLuvut, *luvut, size,isDivisible, denom, i, j, k;

    if (argc < 4)
    {
        return 0;
    }


    a = atoi(argv[1]);
    b = atoi(argv[2]);
    size = 0;

    /* Max amount of numbers is b - a */
    maxLuvut = b-a;
    luvut = (int*)malloc(maxLuvut * sizeof(int));

    /* If either of the given numbers is divisible by any given denominator, 
    don't add it to the list */
    for (i = a; i <= b; i++)
    {
        isDivisible = 0;

        for (j = 3; j < argc; ++j)
        {
            denom = atoi(argv[j]);

            if (i % denom == 0)
            {
                isDivisible = 1;
            }
        }

        if (isDivisible == 0)
        {
            luvut[size] = i;
            ++size;
        }

    }

    /* Print results */
    for (k = 0; k < size; ++k)
    {
        if (k == size - 1 && size != 0)
        {
            printf("%i\n", luvut[k]);
        }
        else if (size != 0)
        {
            printf("%i ", luvut[k]);
        }
    }

    return 0;
}