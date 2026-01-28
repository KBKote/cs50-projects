#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int owed;

    do
    {
        owed = get_int("Change owed: ");
    }
    while (owed < 0);

    int coins = 0;

    coins += owed / 25;
    owed = owed % 25;

    coins += owed / 10;
    owed = owed % 10;

    coins += owed / 5;
    owed = owed % 5;

    coins += owed / 1;
    owed = owed % 1;

    printf("%i\n", coins);
}
