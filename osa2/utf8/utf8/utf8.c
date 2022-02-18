#include <limits.h>
#include "utf8.h"

void utf8_koodaa(unsigned int merkki, unsigned char utf8[])
{
    int i, j, k;
    int lastOne;
    unsigned char utf8Length;

    for (lastOne = CHAR_BIT * sizeof(unsigned int) - 1; lastOne > 0; lastOne--)
    {
        if (merkki == 0)
        {
            lastOne = 0;
            break;
        }
        if ((merkki >> lastOne) & 1)
        {
            break;
        }
    }

    /* Find out the required byte count */
    if (lastOne + 1 <= 7)
    {
        utf8Length = 1;
    }
    else if (lastOne + 1 <= 11)
    {
        utf8Length = 2;
    }
    else if (lastOne + 1 <= 16)
    {
        utf8Length = 3;
    }
    else utf8Length = 4;


    /* Prepare the utf8 bytes */
    for (i = 0; i < utf8Length; i++)
    {
        utf8[i] = 0;

        if (i == 0)
        {
            for (j = 1; j <= utf8Length; j++)
            {
                utf8[i] |= (1 << (CHAR_BIT - j));
            }
        }

        else
        {
            utf8[i] |= (1 << (CHAR_BIT - 1));
        }
    }

    /* Insert bits to the utf8 bytes */
    k = 0;
    for (i = utf8Length - 1; i > 0; i--)
    {
        for (j = 0; j < 6; j++)
        {
            if ((merkki >> k) & 1)
            {
                utf8[i] |= (1 << j);
            }
            k++;
        }
    }

    for (j = 0; j < 7 -utf8Length; j++)
    {
        if ((merkki >> k) & 1)
        {
            utf8[0] |= (1 << j);
        }
        k++;
    }

    utf8[utf8Length] = '\0';
}
