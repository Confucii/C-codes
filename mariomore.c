#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
      x = get_int("Height: ");
    }
    while (x > 23 || x < 0); // ограничение для ввода
     for (int i = 0; i < x; i++)
    {
        for (int y = 0; y < x; y++) // отвечает за количество решёток
        {
            if (i + y >= x - 1)
            printf("#");

            else
            printf(" ");
        }
        printf("  ");

        for (int z = 0; z < i + 1; z++) // отвечает за количество решёток во второй части чтобы больше + чтобы меньше -
        {
        printf("#");
        }
        printf("\n");
    }
}