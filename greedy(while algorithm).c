#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int y = 0;
    float x;
    do
    {
     x = get_float ("Change: ");
    }
    while (x < 0);

    int z = round (x*100);



    while (z >= 25)
    {
        y = y + 1;
        z = z - 25;
    }

    while (z >= 10)
    {
        y = y + 1;
        z = z - 10;
    }

    while (z >= 5)
    {
        y = y + 1;
        z = z - 5;
    }

    while (z >= 1)
    {
        y = y + 1;
        z = z - 1;
    }

        printf ("%i\n", y);
}
