#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j;
    int maxWidth;
    int maxNumberWidth;
    int counter;

    if (argc == 1)
    {
        return 0;
    }

    maxWidth = strlen(argv[1]);
    for (i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) > maxWidth)
        {
            maxWidth = strlen(argv[i]);
        }
    }

    maxNumberWidth = 0;
    counter = argc;
    while (counter != 0)
    {
        counter /= 10;
        maxNumberWidth++;
    }

    for (i = 0; i < (maxNumberWidth + maxWidth + 7); i++)
    {
        printf("#");
    }

    printf("\n# %*i | %-*s #", maxNumberWidth, 1, maxWidth, argv[1]);

    for (i = 2; i < argc; i++)
    {
        printf("\n#");
        for (j = 0; j < (maxNumberWidth + maxWidth + 5); j++)
        {
            if (j == maxNumberWidth + 2)
            {
                printf("+");
            }
            else
            {
                printf("-");
            }
        }
        printf("#");

        printf("\n# %*i | %-*s #", maxNumberWidth, i, maxWidth, argv[i]);
    }

    printf("\n");
    for (i = 0; i < (maxNumberWidth + maxWidth + 7); i++)
    {
        printf("#");
    }

    printf("\n");
    return 0;
}