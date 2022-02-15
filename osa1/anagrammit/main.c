#include <stdio.h>
#include "anagrammit.h"

int main(int argc, char *argv[])
{
    if (anagrammeja(argv[1], argv[2]) == 1)
    {
        printf("joo\n");
    }
    else
    {
        printf("ei\n");
    }

    return 0;
}