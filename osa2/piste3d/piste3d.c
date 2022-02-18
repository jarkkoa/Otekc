#include <math.h>
#include <stdio.h>
#include "piste3d.h"



double etaisyys(Piste3D p1, Piste3D p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
}



void tulosta(Piste3D p, int tarkkuus)
{
    printf("(%.*f, %.*f, %.*f)", tarkkuus, p.x, tarkkuus, p.y, tarkkuus, p.z);
}
