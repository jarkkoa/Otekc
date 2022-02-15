#include <limits.h>
#include <string.h>
#include "anagrammit.h"

int anagrammeja(char mj1[], char mj2[])
{
    unsigned int i;
    int lukumaarat[UCHAR_MAX + 1] = {0};

    for (i = 0; i < strlen(mj1); i++)
    {
        lukumaarat[(int)(mj1[i])]++;
    }

    for (i = 0; i < strlen(mj2); i++)
    {
        lukumaarat[(int)(mj2[i])]--;
    }

    for (i = 0; i < UCHAR_MAX; i++)
    {
        if (lukumaarat[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}