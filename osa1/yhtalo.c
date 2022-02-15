#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a, b, c;
    double roots[2];
    double discriminant;

    if (argc != 4)
    {
        return 0;
    }

    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0 || a == 0)
    {
        printf("Ei ratkaisua\n");
        return 0;
    }

    roots[0] = (-b - sqrt(discriminant)) /  (2*a);
    roots[1] = (-b + sqrt(discriminant)) /  (2*a);

    if (discriminant == 0)
    {
        printf("%.3f\n", roots[0]);
    }
    else 
    {
        printf("%.3f %.3f\n", roots[0], roots[1]);
    }

    return 0;
}
