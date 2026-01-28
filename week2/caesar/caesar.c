#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string arg);
char encrypt(char c, int i);

int main(int argc, string argv[])
{
    if (argc > 2 || argc <= 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    bool isD = only_digits(argv[1]);
    int key = 0;
    string text;

    if (isD == true)
    {
        key = atoi(argv[1]);
        text = get_string("plaintext: ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char encrypted = encrypt(text[i], key);
        printf("%c", encrypted);
    }

    printf("\n");
}

bool only_digits(string arg)
{
    for (int i = 0, n = strlen(arg); i < n; i++)
    {
        if (!isdigit(arg[i]))
        {
            return false;
        }
    }

    return true;
}

char encrypt(char c, int i)
{
    if (islower(c))
    {
        return ((c - 'a' + i) % 26) + 'a';
    }

    if (isupper(c))
    {
        return ((c - 'A' + i) % 26) + 'A';
    }

    return c;
}
