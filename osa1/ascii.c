#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    unsigned char a, b;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);

        if (!(a <= b))
        {
            return 1;
        }
    }
    else return 1;

    for (; a <= b; ++a)
    {
        printf("%i: %c\n", a, a);
    }

    return 0;
}