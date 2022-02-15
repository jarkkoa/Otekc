#include <stdio.h>
#include "caesar.h"

int main(int argc, char *argv[])
{
    char *aakkosto;
    char *korvaava;

    aakkosto = argv[1];
    korvaava = argv[2];

    caesarKoodaa(argv[3], aakkosto, korvaava);

    printf("%s\n", argv[3]);
}