#include "tetris.h"


void paivita(char ruudukko[20][10])
{
    int row, col, i, j;
    int isFull;

    for (row = 19; row >= 0; row--)
    {
        isFull = 1;
        for (col = 0; col < 10; col++)
        {
            if (ruudukko[row][col] == ' ')
            {
                isFull = 0;
                break;
            }
        }
        if (isFull)
        {
            for (i = row; i > 0; i--)
            {
                for (j = 0; j < 10; j++)
                {
                    ruudukko[i][j] = ruudukko[i-1][j];
                    ruudukko[0][j] = ' ';
                }
                row++;
            }
        }
    }
}
