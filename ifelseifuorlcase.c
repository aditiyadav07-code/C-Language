// uppercase or lowercase character
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c>='A' && c<='Z')
    {
        printf("Uppercase character.");
    }
    else if(c>='a' && c<='z')
    {
        printf("Lowercase characater.");
    }
    else
    {
        printf("Invalid character.");
    }
    return 0;
}