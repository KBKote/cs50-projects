#include <cs50.h>
#include <stdio.h>

int main(void){

    int height;

    do
    {
        height = get_int("What will the Pyramids height be? ");
    }
    while (height<0);

    for (int c=1; c <= height; c++)
    {
        for (int s=0; s <=height - c; s++)
        {
            printf(" ");
        }
        for (int h=0; h < c; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
