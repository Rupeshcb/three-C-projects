#include <stdio.h>
#include <cs50.h>
//use the string library for get the strlen function. strlen function works for counting letters or characters
#include <string.h>

int main(void)
{
    string s = "This is your characters counting place!";
    printf("%s\n", s);
    string name = get_string("Write or Paste your words/characters:\n ");
    int n = strlen(name);
    printf("Numbers of Characters:%i\n", n);
}