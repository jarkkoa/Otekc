#include <stdio.h>
#include "muunto.h"

int main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        printf("%i: %s --> ", i, argv[i]);
        muunna(argv[i]);
        printf("%s\n", argv[i]);
    }

    return 0;
}