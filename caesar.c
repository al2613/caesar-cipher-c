#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main (int argc, string argv[])
{
    int k = atoi(argv[1]);

    while (argc != 2 || k < 0)
    {
        printf("Error - try again");
        return 1;
    }

    string plain_text = get_string ("Plaintext:");

    for (int i = 0, n = strlen(plain_text); i < n ; i++)
    {
        int char_i = plain_text[i];
        int encrypt = char_i + k;

       if (islower(plain_text[i]))
       {
           if (encrypt > 122)
           {
               printf("%c", 96 + ((encrypt - 122) % 26));
           }
            else
            {
                printf("%c", encrypt);
            }

       } else if (isupper(plain_text[i]))
       {
           if (encrypt > 90)
           {
               printf("%c", 64 + ((encrypt - 90) % 26));
           }
           else
           {
              printf("%c", encrypt);
           }
       }
       else
       {
           printf("%c", plain_text[i]);
       }

    }
    return 0;

}
