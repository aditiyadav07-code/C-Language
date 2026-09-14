#include <stdio.h>

int countlen(char arr[]);
int vowel(char str[]);

int main()
{
    // COUNT LENGTH
    // char arr[] = "Aditi";
    char arr[100];
    fgets(arr, 100, stdin);
    printf("Length = %d", countlen(arr));
printf("\n");
    // COUNT VOWEL
    char str[]= "aditi";
    printf("Vowel count = %d", vowel(str));
    return 0;
}

int countlen(char arr[])
{
    int count=0;
    for(int i=0 ; arr[i]!='\0' ; i++)  // also -> for(int i=0 ; arr[i]!=0 ; i++)
    {
        count++;
    }
    return count-1;
}

int vowel(char str[])
{
    int count=0;
    for(int i=0; str[i] != 0 ; i++)  // also -> for(int i=0 ; arr[i]!='\0' ; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }  
    return count;
}

/*
String Length

- String ends at '\0'
- arr[i]!=0 == arr[i]!='\0'
- Loop till '\0' to traverse string
- count++ for each character
- fgets() stores '\n' when Enter is pressed
- Length from fgets() includes '\n'
- return count-1 removes '\n'
- Better: remove '\n' separately, return actual count

*/