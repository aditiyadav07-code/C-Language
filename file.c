#include <stdio.h>

int main()
{
    FILE *fptr;  // points to the structure(hidden), used to access file

    // READING A FILE
    char ch;

    fptr = fopen("test.txt", "r");  // open file in read mode

    if(fptr == NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        fscanf(fptr, "%c", &ch);  // scan a character of file
        printf("Character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character in file is : %c\n", ch);

        fclose(fptr);  // close file
    }

    // WRITING A FILE
    
    fptr = fopen("test.txt", "w"); // open file in write mode
    ch = 'A';
    fprintf(fptr, "%c", ch);
    ch = 'l';
    fprintf(fptr, "%c", ch);
    ch = 'i';
    fprintf(fptr, "%c", ch);
    ch = 'e';
    fprintf(fptr, "%c", ch);
    ch = 'n';
    fprintf(fptr, "%c", ch);
    fclose(fptr);

    // APPEND A FILE

    fptr = fopen("test.txt", "a");
    ch = 'e';
    fprintf(fptr, "%c", ch);
    ch = 's';
    fprintf(fptr, "%c", ch);
    ch = 's';
    fprintf(fptr, "%c", ch);
    fclose(fptr);

    // FGETC -> read in file -> fgetc(fptr)
    fptr = fopen("newtest.txt", "r");
    printf("\ncharacter in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    fclose(fptr);

    // FPUTC -> write in file -> fputc('C', fptr)
    fptr = fopen("newtest.txt", "w");
    fputc('A', fptr);
    fputc('r', fptr);
    fputc('o', fptr);
    fputc('r', fptr);
    fputc('a', fptr);
    fclose(fptr);

    // READ THE FULL FILE (EOF = file ended)
    fptr= fopen("string.txt", "r");
    printf("\n");
    ch = fgetc(fptr);
    while( ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}

/*
FILE HANDLING

FILE
- FILE = predefined struct
- FILE *ptr points to opened file

fopen()
- opens file
- returns FILE*
- returns NULL if open fails

Modes
- "r"  -> read (file must exist)
- "w"  -> write (create/overwrite)
- "a"  -> append (write at end)

Reading
- fscanf(ptr,...)
- fgetc(ptr)
- file pointer moves automatically

Writing
- fprintf(ptr,...)
- fputc(ch, ptr)

EOF
- End Of File marker
- used to read till file ends

Example:
while((ch=fgetc(ptr))!=EOF)
{
    printf("%c", ch);
}

fclose()
- closes file
- always close opened files

Good Practices
- always check ptr != NULL
- close every opened file
- keep filename & extension same
- use loops instead of repeated fgetc()/fprintf()
- "w" deletes old file content
- "a" keeps old data & writes at end

Memory
- FILE* stores address of FILE object
- actual file remains on disk
*/

/*
// FILE *fp;
// Declares a FILE pointer.
// It can store the address of an opened file but doesn't point anywhere yet.

// fp = fopen("a.txt", "r");
// Opens the file.
// fopen() returns the address of the opened file.
// That address is stored in fp.

// fprintf(fp, ...), fscanf(fp, ...), fclose(fp);
// These functions use fp (the file's address)
// to know which file to read, write, or close.

// Think of fp as a file handle/ID.
// It doesn't store the file itself.
// It stores the address of the library's internal FILE object.
*/