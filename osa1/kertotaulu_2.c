#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int rowMin, rowMax, colMin, colMax;
    int largestNumber, numberWidth;
    int row, col;

    if (argc != 5) 
    {
        return 0;
    }

    colMin = atoi(argv[1]);
    colMax = atoi(argv[2]);
    rowMin = atoi(argv[3]);
    rowMax = atoi(argv[4]);

    largestNumber = rowMax * colMax;
    numberWidth = 1;
    while (largestNumber > 0)
    {
        largestNumber /= 10;
        numberWidth++;
    }

    printf("%*c", numberWidth, ' ');
    for (col = colMin; col <= colMax; ++col)
    {
        if (col == colMax)
        {
            printf("%*i\n", numberWidth, col);
        }
        else
        {
            printf("%*i", numberWidth, col);
        }
    }

    for (row = rowMin; row <= rowMax; ++row)
    {
        for (col = colMin - 1; col <= colMax; ++col)
        {
            if (col == colMin - 1)
            {
                printf("%*i", numberWidth, row);
            }
            else if (col == colMax)
            {
                printf("%*i\n", numberWidth, row*col);
            }
            else
            {
                printf("%*i", numberWidth, row*col);
            }
        }
    }

    return 0;
}