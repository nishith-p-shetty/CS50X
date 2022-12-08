#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void p_c(string str, int k);

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
    {
        int key;
        sscanf(argv[1], "%d", &key);  // input key
        string str = get_string("plaintext: ");  //input plain text
        printf("ciphertext: "); // print cipher
        p_c(str, key);   //print c
    }
    /* else if (isdigit(*argv[1]))
    {
        for (int i = 0 ; i < strlen(argv[1]) ; i++)
        {
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    } */
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

void p_c(string str, int key)  //print c
{
    for (int i = 0 ; i < strlen(str) ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", (((str[i] - 'a') + key) % 26) + 'a');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", (((str[i] - 'A') + key) % 26) + 'A');
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}