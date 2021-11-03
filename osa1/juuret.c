#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    int decimals;
    int i;
    double number, result;

    if (argc < 3) {return 1;}

    decimals = atoi(argv[1]);

    for (i = 2; i < argc; ++i)
    {
        number = atof(argv[i]);
        result = sqrt(number);
        printf("sqrt(%.*f) = %.*f\n", decimals, number, decimals, result);
    }

    return 0;
}