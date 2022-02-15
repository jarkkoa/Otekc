#include <stdio.h>
#include <stdlib.h>
#define LOTTO_LINE 7

int main(int argc, char *argv[])
{
    int numbers[LOTTO_LINE];
    int drawnNumbers[LOTTO_LINE];
    int correctNumbers[LOTTO_LINE];
    int correctNumberCount;
    int comparisonNumber;

    int i, j;

    if (argc != 15)
    {
        return 1;
    }

    for (i = 1; i <= LOTTO_LINE; ++i)
    {
        drawnNumbers[i - 1] = atoi(argv[i]);
        numbers[i - 1] = atoi(argv[i + LOTTO_LINE]);
    }

    correctNumberCount = 0;

    for (i = 0; i < LOTTO_LINE; ++i)
    {
        comparisonNumber = numbers[i];

        for (j = 0; j < LOTTO_LINE; ++j)
        {
            if (comparisonNumber == drawnNumbers[j])
            {
                correctNumbers[correctNumberCount] = comparisonNumber;
                ++correctNumberCount;
            }
        }
    }

    printf("Voittorivi: ");
    for (i = 0; i < LOTTO_LINE; ++i)
    {
        if (i == LOTTO_LINE - 1)
            printf("%i\n", drawnNumbers[i]);
        else
            printf("%i ", drawnNumbers[i]);
    }

    printf("Lottorivi: ");
    for (i = 0; i < LOTTO_LINE; ++i)
    {
        if (i == LOTTO_LINE - 1)
            printf("%i\n", numbers[i]);
        else
            printf("%i ", numbers[i]);
    }

    if (correctNumberCount == 0)
        printf("Ei yhtään oikein!\n");

    else
    {
        printf("%i oikein: ", correctNumberCount);
        for (i = 0; i < correctNumberCount; ++i)
        {
            if (i == correctNumberCount - 1)
                printf("%i\n", correctNumbers[i]);
            else
                printf("%i ", correctNumbers[i]);
        }
    }

    return 0;
}