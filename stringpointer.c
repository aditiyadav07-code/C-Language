#include <stdio.h>

int main()
{
    char *canChange="Hello World";
    puts(canChange);

    // changes -> cause the pointer can point to a different string
    canChange="Hello Aditi";
    puts(canChange);

    char cannotChange[]="Cannot change";
    puts(cannotChange);

    // cannotChange="Can change"; -> shows error
    // cause we cannot change value in array
    puts(cannotChange);

    return 0;
}
/*
String: Pointer vs Array

- char *ptr="Hello"; -> ptr stores addr of 1st char
- ptr="World"; -> valid, ptr can point elsewhere

- char arr[]="Hello"; -> chars stored in array
- arr="World"; -> invalid, array addr can't change

- arr[0]='Y'; -> valid, chars inside array can change
- ptr[0]='Y'; -> don't do, string literal may be read-only

- Pointer => can change where it points
- Array => fixed base addr, can't be reassigned

*/