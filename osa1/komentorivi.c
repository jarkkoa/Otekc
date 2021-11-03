#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; ++i)
    {
        printf("%i: %s (pituus: %li)\n", i, argv[i], strlen(argv[i]));
    }

    return 0;
}