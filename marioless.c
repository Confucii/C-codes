#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
      x = get_int("Height: ");
    }
    while (x > 23 || x < 0);
     for (int i = 0; i < x; i++)
    {
         for (int y = 0; y < x - i - 1; y++)
        {
             printf(" ");
        }
        for (int y = 0; y < i + 2; y++)
        {
             printf("#");
        }
        printf("\n");
    }
}