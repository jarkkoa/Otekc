#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fibonacci.h"


char *fib_jono_mj(unsigned int n)
{
    unsigned int i, j = 0;
    int digits;
    int spaceNeeded;
    int spaceAllocated = sizeof (char);
    int previous2 = 0;
    int previous = 1;
    int result;
    char *mj = malloc(spaceAllocated);

    if (n == 0)
    {
        mj[0] = '\0';
        return mj;
    }

    if (n >= 1)
    {
        spaceAllocated = 2 * sizeof (char);
        mj = realloc(mj, spaceAllocated);
        sprintf(mj, "0");
    }

    if (n >= 2)
    {
        spaceAllocated = 8 * sizeof(char);
        mj = realloc(mj, spaceAllocated);
        sprintf(mj + strlen(mj), ", 1");

        for (i = 2; i < n; i++)
        {
            result = previous2 + previous;
            previous2 = previous;
            previous = result;
            digits = 0;

            for (j = result; j > 0; j /= 10)
            {
                digits++;
            }

            spaceNeeded = digits + 2 + strlen(mj);

            if (spaceNeeded > spaceAllocated)
            {
                while (spaceNeeded > spaceAllocated)
                {
                    spaceAllocated *= 2;
                }
                mj = realloc(mj, spaceAllocated);
            }

            sprintf(mj + strlen(mj), ", %i", result);
        }
    }

    mj = realloc(mj, strlen(mj) + 1);
    mj[strlen(mj)] = '\0';
    return mj;
}
