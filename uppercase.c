#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //ask the users for write their lowercase letters
    string s = get_string("Write your lowercase letters: ");
    // print the uppercase letters
    printf("WOW! This is your Uppercase letters: ");
    for( int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}