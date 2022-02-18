#ifndef PISTE3D_H
#define PISTE3D_H

struct Piste3D
{
    double x;
    double y;
    double z;
};

typedef struct Piste3D Piste3D;

double etaisyys(Piste3D p1, Piste3D p2);
void tulosta(Piste3D p, int tarkkuus);

#endif
