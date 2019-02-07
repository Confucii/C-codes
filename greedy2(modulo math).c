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


        y = y + (z - (z % 25)) / 25;
        z = z % 25;

        y = y + (z - (z % 10)) / 10;
        z = z % 10;

        y = y + (z - (z % 5)) / 5;
        z = z % 5;

        y = y + (z - (z % 1)) / 1;
        z = z % 1;


        printf ("%i\n", y);



}
