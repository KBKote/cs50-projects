#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    do
    {
        height = get_int("What should the height of the Pyramids be? ");
    }
    while (height < 1 || height > 8);

    for (int c = 1; c <= height; c++)
    {
        for (int s1 = 0; s1 < height - c; s1++)
        {
            printf(" ");
        }

        for (int h1 = 0; h1 < c; h1++)
        {
            printf("#");
        }

        printf("  ");

        for (int h2 = 0; h2 < c; h2++)
        {
            printf("#");
        }

        printf("\n");
    }
}
