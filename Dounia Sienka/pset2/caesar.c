
//DOUNIA SIENKA

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (int argc, string argv[])

{
    if (argc!= 2)
    {
        printf ("Plaintext : ");
    }

    //get the key from the user
    int k= atoi(argv[1]);

    //get the plaintext from the user
    string d= get_string ("Plaintext: ");

    //print the ciphertext
    printf ("Ciphertext: ");

    for ( int i= 0, n= strlen(d); i< n; i++)
    {
        if (islower(d[i]))
        {
            printf ("%c", ((d[i]-'a')+ k)%26+ 'a');
        }
        else if (isupper(d[i]))
        {
            printf ("%c", ((d[i]-'A')+ k)%26+ 'A');
        }
        else
        {
            printf ("%c", d[i]);
        }
    }
    printf ("\n");
}
