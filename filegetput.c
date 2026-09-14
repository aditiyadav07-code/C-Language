#include <stdio.h>

/*
fgets() → read a whole line from a file
fputs() → write a whole string to a file
*/

int main()
{
    // READING ONE LINE
 // Calling it again the file pointer automatically moves to the next line.

    FILE *fptr;
    fptr=fopen("string.txt", "r");
    char str[100];

    fgets(str, 100, fptr);  // SYNTAX- fgets(str, size, fptr);

    printf("%s", str);
    fclose(fptr);

    // WRITING ONE LINE

    fptr=fopen("string.txt", "w");

    fputs("Hello\n", fptr);
    fputs("Aditi is bored.", fptr);

    fclose(fptr);

    return 0;
}

/*
String File Functions

fgets(str, size, ptr)
- reads one line from file
- stops at '\n', EOF or size-1
- stores '\0' at end

fputs(str, ptr)
- writes whole string to file
- doesn't add '\n' automatically

Comparison
- fgetc()/fputc() -> one character
- fgets()/fputs() -> one string/line

Return Value
- fgets() -> str if success, NULL if EOF/error

getc  -> get Character
putc  -> put Character
gets  -> get String
puts  -> put String
*/