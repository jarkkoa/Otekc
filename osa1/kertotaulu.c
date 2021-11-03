#include <stdio.h>

int main()
{
    int row;
    int col;

    printf("%4c", 'x');
    for (col = 1; col <= 15; ++col)
    {
        if (col == 15)
        {
            printf("%4i\n", col);
        }
        else
        {
            printf("%4i", col);
        }
    }

    for (row = 1; row <= 15; ++row)
    {
        for (col = 0; col <= 15; ++col)
        {
            if (col == 0)
            {
                printf("%4i", row);
            }
            else if (col == 15)
            {
                printf("%4i\n", row*col);
            }
            else
            {
                printf("%4i", row*col);
            }
        }
    }

    return 0;
}