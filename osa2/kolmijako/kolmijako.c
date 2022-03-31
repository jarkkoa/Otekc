#include "kolmijako.h"

IntPari kolmijako(unsigned int n, int t[], int vipu1, int vipu2, int *p1,
                  int *p2)
{
    IntPari divided;
    int x;
    unsigned int i;
    int pienet1 = 0;
    int pienet2 = 0;

    if (t[vipu1] > t[vipu2])
    {
        x = vipu1;
        vipu1 = vipu2;
        vipu2 = x;
    }

    for (i = 0; i < n; i++)
    {
        if (t[i] < t[vipu1])
        {
            x = t[i];
            t[i] = t[pienet1];
            t[pienet1] = x;

            if (vipu1 == pienet1)
            {
                vipu1 = i;
            }
            if (vipu2 == pienet1)
            {
                vipu2 = i;
            }

            pienet1++;
        }
    }

    x = t[pienet1];
    t[pienet1] = t[vipu1];
    t[vipu1] = x;
    pienet2 = pienet1 + 1;

    if (vipu2 == pienet1)
    {
        vipu2 = vipu1;
    }



    for (i = pienet2; i < n; i++)
    {
        if (t[i] < t[vipu2])
        {
            x = t[i];
            t[i] = t[pienet2];
            t[pienet2] = x;

            if (vipu2 == pienet2)
            {
                vipu2 = i;
            }

            pienet2++;
        }
    }

    x = t[pienet2];
    t[pienet2] = t[vipu2];
    t[vipu2] = x;

    *p1 = pienet1;
    *p2 = pienet2;

    divided.x = *p1;
    divided.y = *p2;

    return divided;
}
