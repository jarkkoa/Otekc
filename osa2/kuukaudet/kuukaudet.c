#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "kuukaudet.h"

const char* KK_NIMET[KK_LKM] = {"tammikuu", "helmikuu", "maaliskuu", "huhtikuu",
                                "toukokuu", "kesäkuu", "heinäkuu", "elokuu",
                                "syyskuu", "lokakuu", "marraskuu", "joulukuu"};

const char KK_PAIVAT[2][KK_LKM] = {
                                    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
                                  };

int karkausvuosi(int vuosiluku)
{
    if (vuosiluku % 4 == 0 && vuosiluku % 100 != 0)
    {
        return 1;
    }
    else if (vuosiluku % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char kkPituus(const char *kkNimi, int vuosiluku)
{
    unsigned int i, j;
    int leapYear = karkausvuosi(vuosiluku);
    int areEqual;


    for (i = 0; i < KK_LKM; i++)
    {
        areEqual = 1;
        for (j = 0; j < strlen(kkNimi); j++)
        {
            if (tolower(kkNimi[j]) != KK_NIMET[i][j])
            {
                areEqual = 0;
            }
        }

        if (areEqual)
        {
            return KK_PAIVAT[leapYear][i];
        }

    }

    return -1;
}
