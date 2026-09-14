#include <stdio.h>
#include <string.h>

int main()
{
    // LENGTH 
    char arr[100];
    fgets(arr, 100, stdin);
    printf("Length = %d", strlen(arr)-1); 
    // - 1 cause fgets() stores '\n' when Enter is pressed
    // - Length from fgets() includes '\n'

printf("\n");

    // COPY 
    char newstr[20]="Newstring";
    char oldstr[20]="Oldstring";
    strcpy(newstr, oldstr);  // strcpy(copied str, str)
    puts(newstr);

    // CONCATENATE (APPEND)
    strcat(oldstr, newstr);
    puts(oldstr);

    // CMP (COMPARE)
    char first[]="Apple";
    char second[]="Banana";
    printf("%d", strcmp(first, second));   // strcmp(A, )B -> A-B = 65-66 = -1
    
    // strlen -> length
    // strcpy -> copy
    // strcat -> join/append
    // strcmp -> compare
    return 0;
}

/*
<string.h>

strlen(arr)
- counts chars till '\0'
- fgets() stores '\n'
- strlen(arr)-1 removes '\n'

strcpy(newstr, oldstr)
- copies oldstr -> newstr
- newstr becomes oldstr
- previous data in newstr is overwritten

strcat(oldstr, newstr)
- appends newstr at end of oldstr
- oldstr changes
- oldstr must have enough space
- else buffer overflow

Example:
"Old" + "New"
= "OldNew"

strcmp(first, second)
- compares strings alphabetically
- <0 : first comes before second
- =0 : both same
- >0 : first comes after second

Example:
"Apple" vs "Banana"
A comes before B
=> negative value
*/