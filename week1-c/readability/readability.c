#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentances = count_sentences(text);
    double L = ((float) letters / (float) words) * 100;
    double S = ((float) sentances / (float) words) * 100;
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade > 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i\n", grade);
    }


}

int count_letters(string text)
{
    int letters = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    return letters;
}

int count_words(string text)
{
    int words = 1;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (i>0)
        {
            if (isspace(text[i-1]) && isalnum(text[i]))
            {
                words++;
            }
        }
    }

    return words;
}

int count_sentences(string text)
{
    int sentances = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalnum(text[i-1]))
        {
            if(text[i] == '.' || text[i] == '?' || text[i] == '!')
            {
                sentances ++;
            }
        }
    }

    return sentances;
}
