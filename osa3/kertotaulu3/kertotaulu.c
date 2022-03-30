#include <stdlib.h>
#include "kertotaulu.h"

Kertotaulu *luoKertotaulu(uint a, uint b, uint c, uint d)
{
    uint i, j;

    Kertotaulu *kt = malloc(sizeof(Kertotaulu));

    kt->a = a;
    kt->b = b;
    kt->c = c;
    kt->d = d;

    kt->kertotaulu = malloc((d-c+2) * sizeof(uint*));

    for (i = c; i <= d+1; i++)
    {
        kt->kertotaulu[i - c] = malloc((b-a+2) * sizeof(uint));
        for (j = a; j <= b+1; j++)
        {
            kt->kertotaulu[i-c][j-a] = (i-1) * (j-1);
            kt->kertotaulu[0][j-a+1] = j;
            kt->kertotaulu[i - c][0] = i-1;
        }
    }

    return kt;
}

void tuhoaKertotaulu(Kertotaulu *kt)
{
    uint i;

    for (i = 0; i < (kt->d - kt->c + 2); i++)
    {
        free(kt->kertotaulu[i]);
    }
    free(kt->kertotaulu);
    free(kt);

}
