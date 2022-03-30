#include <stdlib.h>
#include <stdio.h>
#include "murtoluku.h"



Murtoluku supistettuML(int os, int nim)
{
    Murtoluku result;
    int pieni, iso, apu;

    if (os == 0 || nim == 0)
    {
        result.os = os;
        result.nim = nim;
        return result;
    }

    if (nim < 0)
    {
        os *= -1;
        nim *= -1;
    }

    if (abs(os) < abs(nim))
    {
        pieni = abs(os);
        iso = abs(nim);
    }
    else
    {
        pieni = abs(nim);
        iso = abs(os);
    }

    while (pieni != iso)
    {
        iso = iso - pieni;
        if (iso < pieni)
        {
            apu = iso;
            iso = pieni;
            pieni = apu;
        }
    }

    result.os = os / iso;
    result.nim = nim / iso;

    return result;
}


Murtoluku lisaaML(Murtoluku a, Murtoluku b)
{
    Murtoluku kopio = a;

    a.os *= abs(b.nim);
    a.nim *= abs(b.nim);

    b.os *= abs(kopio.nim);
    b.nim *= abs(kopio.nim);

    return supistettuML(a.os + b.os, a.nim);
}



Murtoluku vahennaML(Murtoluku a, Murtoluku b)
{
    Murtoluku kopio = a;

    a.os *= abs(b.nim);
    a.nim *= abs(b.nim);

    b.os *= abs(kopio.nim);
    b.nim *= abs(kopio.nim);

    return supistettuML(a.os - b.os, a.nim);
}


Murtoluku kerroML(Murtoluku a, Murtoluku b)
{
    return supistettuML(a.os * b.os, a.nim * b.nim);
}

Murtoluku jaaML(Murtoluku a, Murtoluku b)
{
    return supistettuML(a.os * b.nim, a.nim * b.os);
}

void tulostaML(Murtoluku ml)
{
    if (ml.os == 0)
    {
        printf("0");
    }
    else if (ml.nim == 1)
    {
        printf("%i", ml.os);
    }
    else
    {
        printf("%i/%i", ml.os, ml.nim);
    }

}
