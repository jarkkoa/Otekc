#include <string.h>
#include <stdio.h>
#include "pvm.h"


Pvm *kasvataPvm(Pvm *pvm)
{
    int leapDay = 0;
    int isLongMonth = 0;

    switch(pvm->kk)
    {
        case TAMMI: isLongMonth = 1; break;
        case MAALIS: isLongMonth = 1; break;
        case TOUKO: isLongMonth = 1; break;
        case HEINA: isLongMonth = 1; break;
        case ELO: isLongMonth = 1; break;
        case LOKA: isLongMonth = 1; break;
        case JOULU: isLongMonth = 1; break;
        default: isLongMonth = 0;
    }

    if (pvm->vuosi % 4 == 0 && pvm->vuosi % 100 != 0)
    {
        leapDay = 1;
    }
    else if (pvm->vuosi % 400 == 0)
    {
        leapDay = 1;
    }


    if (pvm->kk != 2)
    {
        if (pvm->pv < (30 + isLongMonth))
        {
            pvm->pv++;
        }
        else
        {
            pvm->pv = 1;

            if (pvm->kk == 12)
            {
                pvm->kk = 1;
                pvm->vuosi++;
            }
            else
            {
                pvm->kk++;
            }
        }
    }
    else
    {
        if (pvm->pv < (28 + leapDay))
        {
            pvm->pv++;
        }
        else
        {
            pvm->pv = 1;

            if (pvm->kk == 12)
            {
                pvm->kk = 1;
                pvm->vuosi++;
            }
            else
            {
                pvm->kk++;
            }
        }
    }

    if (strcmp(pvm->vk_pv, "su") == 0)
    {
        strcpy(pvm->vk_pv, "ma");
    }

    else if (strcmp(pvm->vk_pv, "ma") == 0)
    {
        strcpy(pvm->vk_pv, "ti");
    }

    else if (strcmp(pvm->vk_pv, "ti") == 0)
    {
        strcpy(pvm->vk_pv, "ke");
    }

    else if (strcmp(pvm->vk_pv, "ke") == 0)
    {
        strcpy(pvm->vk_pv, "to");
    }

    else if (strcmp(pvm->vk_pv, "to") == 0)
    {
        strcpy(pvm->vk_pv, "pe");
    }

    else if (strcmp(pvm->vk_pv, "pe") == 0)
    {
        strcpy(pvm->vk_pv, "la");
    }

    else if (strcmp(pvm->vk_pv, "la") == 0)
    {
        strcpy(pvm->vk_pv, "su");
    }

    return pvm;
}


unsigned int pvmEro(const Pvm *a, const Pvm *b)
{
    unsigned int daysBetween = 0;
    Pvm laterDate;
    Pvm earlierDate;

    if (a->vuosi == b->vuosi)
    {
        if (a->kk == b->kk)
        {
            if (a->pv < b->pv)
            {
                earlierDate = *a;
                laterDate = *b;
            }
            else
            {
                earlierDate = *b;
                laterDate = *a;
            }
        }
        else if (a->kk < b->kk)
        {
            earlierDate = *a;
            laterDate = *b;
        }
        else
        {
            earlierDate = *b;
            laterDate = *a;
        }
    }
    else if (a->vuosi < b->vuosi)
    {
        earlierDate = *a;
        laterDate = *b;
    }
    else
    {
        earlierDate = *b;
        laterDate = *a;
    }

    while (earlierDate.vuosi != laterDate.vuosi
           || earlierDate.kk != laterDate.kk
           || earlierDate.pv != laterDate.pv)
    {
        kasvataPvm(&earlierDate);
        daysBetween++;
    }


    return daysBetween;
}

void tulostaPvm(Pvm *pvm)
{
    printf("%s %i.%i.%i", pvm->vk_pv, pvm->pv, pvm->kk, pvm->vuosi);
}
