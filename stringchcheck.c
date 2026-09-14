#include <stdio.h>

void checkch(char str[], char ch);

int main()
{
    char str[]= "Aditi";
    char ch = 'i';
    checkch(str, ch);
    return 0;
}

void checkch(char str[], char ch)
{
    for(int i=0; str[i]!=0; i++)
    {
        if(str[i]==ch)
        {
            printf("Character is present\n");
            return;
        }
    }
    printf("Character not present\n");
}

/*
Character Search in String

- if(str[i]==ch) -> match found
- Print "present" and return
- return stops further checking
- If loop ends -> char not found

Example:
"Aditi", 'i' => present

Avoid:
- printing "not present" inside loop
- it'll print for every mismatch
*/