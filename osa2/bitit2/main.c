#include <stdio.h>
#include "bitit.h"

int main(int argc, char *argv[])
{
    int LUKU = 2015;

    kaannaScharBitit((signed char*)&LUKU);
    printf("%i\n", LUKU);

    LUKU = 2015;
    kaannaShortBitit((short*)&LUKU);
    printf("%i\n", LUKU);

    LUKU = 2015;
    kaannaIntBitit(&LUKU);
    printf("%i\n", LUKU);

    LUKU = 2015;
    kaannaLongBitit((long*)&LUKU);
    printf("%i\n", LUKU);

    return 0;
}