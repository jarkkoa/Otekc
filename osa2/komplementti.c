#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i;
    int bitCount;
    int result = 0;

    bitCount = strlen(argv[1]);

    if (bitCount != 0)
    {
        for (i = 0; i < bitCount; i++)
        {
            if (argv[1][i] == '1' && i == 0)
            {
                result -= pow(2, bitCount - 1 - i);
            }
            else if (argv[1][i] == '1')
            {
                result += pow(2, bitCount - 1 - i);
            }
        }

        printf("%i\n", result);
    }

    return 0;
}