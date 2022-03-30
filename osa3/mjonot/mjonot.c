#include <stdlib.h>
#include "mjonot.h"


char **kopioi_mjt(char **mjt, size_t lkm)
{
    size_t i;

    char **table = malloc(lkm * sizeof(char*));

    for (i = 0; i < lkm; i++)
    {
        table[i] = malloc((strlen(mjt[i]) + 1) * sizeof(char));
        strcpy(table[i], mjt[i]);
    }

    return table;
}
