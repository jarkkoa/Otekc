#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float smallestNumber, largestNumber;
    int nonUniqueCount, mostCommonCount;
    int isUnique;
    float nonUnique[256];
    char mostCommon[256][10];
    int i, j;

    enum truthValues
    {
        False,
        True
    };

    smallestNumber = atof(argv[1]);
    largestNumber = atof(argv[1]);
    nonUniqueCount = 0;
    mostCommonCount = 0;

    for (i = 1; i < argc; i++)
    {
        isUnique = True;
        int current = atof(argv[i]);

        if (atof(argv[i]) < smallestNumber)
        {
            smallestNumber = atof(argv[i]);
        }
        if (atof(argv[i]) > largestNumber)
        {
            largestNumber = atof(argv[i]);
        }

        for (j = i + 1; j < argc; j++)
        {
            if (argv[i] == argv[j])
            {
                nonUnique[nonUniqueCount] = atof(argv[i]);
                nonUniqueCount++;
            }
        }

        for (j = i + 1; j < argc; j++)
        {
            if (argv[i] == argv[j])
            {
                mostCommonCount++;
            }
        }
    }

    printf("Pienin: %f\n", smallestNumber);
    printf("Suurin: %f\n", largestNumber);
    printf("Ainutlaatuiset: ");

    for (i = 1; i < argc; i++)
    {
        isUnique = True;
        for (j = i; j < nonUniqueCount; j++)
        {
            if (atof(argv[i]) == nonUnique[j])
            {
                isUnique = False;
            }
        }
        if (isUnique == True)
        {
            printf("%f ", atof(argv[i]));
        }
    }
    printf("\n");

    printf("Useimmiten esiintyneet (%d kertaa): ", mostCommonCount);
}