#include <stdio.h>

int main()
{
    int i;
    int luvut[100];
    int size = 0;
    
    for (i = 0; i <= 100; i++)
    {
        if (i % 5 != 0 && i % 3 != 0 && i % 2 != 0)
        {
            luvut[size] = i;
            ++size;
        }
    }
    
    for (i = 0; i < size; ++i)
    {
        if (i == size - 1)
        {
            printf("%i\n", luvut[i]);
        }
        else
        {
            printf("%i ", luvut[i]);
        }
    }

    return 0;
}