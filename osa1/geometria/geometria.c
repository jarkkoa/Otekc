#include "geometria.h"

const long double PII = 3.1415926535897932385L;

double ympyranAla(double sade)
{
    return PII * sade*sade;
}

double pallonTilavuus(double sade)
{
    return (4.0f * PII * sade*sade*sade) / 3.0f;
}