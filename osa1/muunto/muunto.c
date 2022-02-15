#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "muunto.h"

void muunna(char mj[])
{
    size_t i;
    int index;
    char copy;

    for (i = 0; i < strlen(mj); i++)
    {
        if (islower(mj[i]))
        {
            mj[i] = toupper(mj[i]);
        }
        else
        {
            mj[i] = tolower(mj[i]);
        }
    }

    index = 0;
    for (i = (strlen(mj) - 1); i >= (strlen(mj)/2); i--)
    {
        copy = mj[i];

        mj[i] = mj[index];
        mj[index] = copy;
        index++;
    }
}