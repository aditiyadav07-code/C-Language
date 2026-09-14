#include <stdio.h>

int main()
{
    char str[100];
    // gets(str); is dangerous and removed from modern c, fgets is used instead
    // can use scanf("%s", str); or fgets
    fgets(str, 100, stdin);

    // can use printf("%s", str); or puts
    puts(str);

    return 0;
}
/*
Concept: fgets() and puts()

- fgets() is used to read strings safely.
- Syntax:
  fgets(str, size, stdin);

- str = destination array
- size = maximum number of characters
- stdin = keyboard input source

- fgets() reads spaces.
- fgets() stores '\n' when Enter is pressed.
- fgets() automatically adds '\0'.

- scanf("%s", str) stops reading at the first space.
- fgets() is preferred for full-line input.

- puts(str) prints a string.
- puts() automatically adds a newline ('\n').
- printf("%s", str) can also print strings.

- gets() is unsafe and removed from modern C.
*/