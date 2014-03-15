#include <stdlib.h>
#include <stdio.h>
#include <cs50.h> //provides GetString() to get a string from the user
#include <ctype.h> 
#include <string.h>

//takes in char a, and increments it by k if it is a letter
char crypt(char a, int k);

int main(int argc, string argv[])
{ 
    if (argc!=2)
    {
        printf("Invalid parameters.\n");
        return 1;
    }
    int k = atoi(argv[1]);
    
    string sentence = GetString();
    
    for(int i=0, slength = strlen(sentence); i<slength; i++)
        sentence[i] = crypt(sentence[i], k);
    printf("%s\n", sentence);
}

char crypt(char a, int k)
{
    int base;           //base allows for the use of MOD on letter values of 0-25
    if (isalpha(a))
    {
        if(islower(a))      
            base = 97;
        else
            base= 65;
        return (a-base+k)%26+base;      
    }
    else
        return a;   
}


 
