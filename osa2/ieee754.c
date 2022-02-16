#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main(int argc, char *argv[])
{
    int i;
    char sign;
    int exponent = 0;
    float mantissa = 1.0;
    float result;

    if (argv[1][0] == '1')
    {
        sign = '-';
    }
    else
        sign = '+';

    for (i = 1; i < 9; i++)
    {
        if (argv[1][i] == '1')
        {
            exponent += pow(2, 8 - i);
        }
    }
    exponent -= CHAR_MAX;

    for (i = 0; i < 23; i++)
    {
        if (argv[1][i + 9] == '1')
        {
            mantissa += 1 / (pow(2, i + 1));
        }
    }

    result = mantissa * pow(2, exponent);

    if (sign == '-')
    {
        result *= -1;
    }

    printf("%.15f\n%i\n%c\n%.15f\n", mantissa, exponent, sign, result);

    return 0;
}