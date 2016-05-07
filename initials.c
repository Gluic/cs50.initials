/**
* Initials
* Get a Name of user
* Print only Initials
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name;
    int counter = 0;
    int initials[];
    do
    {
        printf ("Input your name:\n");
        name = GetString();
    }
    while (name == NULL);
    
    for (int i = 0, n = strlen(name);i < n;i++)
    {
        if (counter == 0)
        {
            if (name [i] != " ")
            {
                initials = toupper(name[i]);
                counter = 1;
            }                
        }
        if (counter == 1)
        {
            if (name [i] == " ")
                counter = 1;               
        }
        
    
    
    }
    printf ("%s\n",initials);





}
