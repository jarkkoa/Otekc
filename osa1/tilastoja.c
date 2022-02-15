#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double smallestNumber, largestNumber;
    int counter, highestCount;
    int i, j;
    int isUnique;
    int notPrinted;

    enum truthValues
    {
        False,
        True
    };

    smallestNumber = atof(argv[1]);
    largestNumber = atof(argv[1]);
    highestCount = 1;

    for (i = 1; i < argc; i++)
    {
        if (atof(argv[i]) < smallestNumber)
        {
            smallestNumber = atof(argv[i]);
        }
        if (atof(argv[i]) > largestNumber)
        {
            largestNumber = atof(argv[i]);
        }
    }

    printf("Pienin: %f\n", smallestNumber);
    printf("Suurin: %f", largestNumber);

    notPrinted = True;
    for (i = 1; i < argc; i++)
    {
        isUnique = True;
        for (j = 1; j < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) == 0 && i != j)
            {
                isUnique = False;
            }
        }
        if (isUnique == True)
        {
            if (notPrinted == True)
            {
                printf("\nAinutlaatuiset:");
                notPrinted = False;
            }
            printf(" %f", atof(argv[i]));
        }
    }

    for (i = 1; i < argc; i++)
    {
        counter = 0;
        for (j = i; j < argc; j++)
        {
            if (strcmp(argv[i], argv[j]) == 0)
            {
                counter++;
            }
        }
        if (counter > highestCount)
        {
            highestCount = counter;
        }
    }

    if (highestCount != 1)
    {
        printf("\nUseimmiten esiintyneet (%i kertaa):", highestCount);

        for (i = 1; i < argc; i++)
        {
            counter = 0;
            for (j = i; j < argc; j++)
            {
                if (strcmp(argv[i], argv[j]) == 0)
                {
                    counter++;
                }
            }
            if (counter == highestCount)
            {
                printf(" %f", atof(argv[i]));
            }
        }
    }

    printf("\n");

    return 0;
}
