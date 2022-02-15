#include <stdio.h>
#include <stdlib.h>
#include "geometria.h"

int main(int argc, char *argv[])
{
    int i;
    double r;

    printf("Piin arvo: %.19Lf\n", PII);
    for (i = 1; i < argc; i++)
    {
        r = atof(argv[i]);
        printf("Säteen %f omaavan ympyrän ala ja pallon tilavuus: %.10f ja %.10f\n", r, 
                ympyranAla(r), pallonTilavuus(r));
        printf("Säteen %f omaavan ympyrän piiri on %.10Lf\n", r, 2*PII*r);
    }

    return 0;
}