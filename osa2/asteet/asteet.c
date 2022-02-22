#include "asteet.h"

float muunna(Lampotila a, Asteikko b)
{
    if (a.asteikko == b)
    {
        return a.lampotila;
    }

    if (b == Celsius)
    {
        if (a.asteikko == Fahrenheit)
        {
            return (a.lampotila - 32) / 1.8;
        }

        if (a.asteikko == Kelvin)
        {
            return a.lampotila - 273.15;
        }
    }

    if (b == Fahrenheit)
    {
        return muunna(a, Celsius) * 1.8 + 32;
    }

    if (b == Kelvin)
    {
        return muunna(a, Celsius) + 273.15;
    }

    return 0;
}


float erotus(Lampotila a, Lampotila b, Asteikko c)
{
    Lampotila erotus;

    erotus.asteikko = c;
    erotus.lampotila = muunna(a, c) - muunna(b, c);

    return erotus.lampotila;
}
