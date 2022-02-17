#include <stdio.h>
#include "bitit.h"

#define LUKU 2015

int main(int argc, char *argv[])
{
    signed char testi1 = LUKU;
    short testi2 = LUKU;
    int testi3 = LUKU;
    long int testi4 = LUKU;

    kaannaScharBitit(&testi1);
    printf("%i\n", testi1);

    kaannaShortBitit(&testi2);
    printf("%i\n", testi2);

    kaannaIntBitit(&testi3);
    printf("%i\n", testi3);

    kaannaLongBitit(&testi4);
    printf("%li\n", testi4);

    return 0;
}