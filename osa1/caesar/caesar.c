#include <string.h>
#include <limits.h>
#include "caesar.h"

void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[])
{
    size_t i, j;
    char currentChar;

    for (i = 0; i < strlen(mj); i++)
    {
        currentChar = mj[i];

        for (j = 0; j < strlen(aakkosto); j++)
        {
            if (currentChar == aakkosto[j])
            {
                mj[i] = korvaavat[j];
            }
        }
    }
}