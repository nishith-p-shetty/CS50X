#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text); //count  letter
int count_words(string text); //count word
int count_sentences(string text); //count sentence

int main(void)
{
    string str = get_string("Text: ");
    //printf("letters   : %d\n", count_letters(str));
    //printf("words     : %d\n", count_words(str));
    //printf("sentences : %d\n", count_sentences(str));
    float grade = 0.0588 * (100 * (float) count_letters(str) / (float) count_words(str)) - 0.296 * (100 * (float) count_sentences(str) / (float) count_words(str)) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

int count_letters(string text) //count  letter
{
    int l = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (isalpha(text[i]))
        {
            l++;
        }
    }
    return l;
}

int count_words(string text)  //count word
{
    int w = 0;
    for (int i = 0 ; i <= strlen(text) ; i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            w++;
        }
    }
    return w;
}

int count_sentences(string text)  //count sentence
{
    int s = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            s++;
        }
    }
    return s;
}