#include <stdio.h>

// In string \0 is the last character which is compulsory
int main()
{
    // 01
    char name[] = {'A', 'D', 'I', 'T', 'I', '\0'};
    // this -> printf(name); -> it works but not preferred
    // Reason: printf() expects a format string.
    printf("%s", name);

    printf("\n");

    // 02
    char name2[] = {"ADITI"};
    printf("%s", name2);

    printf("\n");
    // print string

    // 01
    char firstname[] = {"Aditi"};
    char lastname[] = {" Yadav"};
    printf("%s", firstname);
    printf("%s", lastname);
    printf("\n");

    // 02
    char first_name[] = "Aditi";
    char last_name[] = " Yadav";
    printf("%s", first_name);
    printf("%s", last_name);
    printf("\n");

    // 03
    char *first_name1 = "Aditi";
    char *last_name1 = " Yadav";
    printf("%s", first_name1);
    printf("%s", last_name1);

    return 0;
}

/*
Concept: Strings in C

- A string is a character array ending with '\0'.
- '\0' is called the null character.
- %s is used to print strings.
- char ch = 'A' stores a single character.
- char name[] = "Aditi" stores a string.
- Compiler automatically adds '\0' to string literals.
- char name[] = "Aditi" and char name[] = {'A','d','i','t','i','\0'} are equivalent.
- char *name = "Aditi" creates a pointer to a string literal.
- Always ensure strings end with '\0'.
- printf("%s", str) prints characters until '\0' is reached.
- Arrays can be modified element by element.
- String literals pointed to by char* should not be modified.
*/

/*
An array name already represents the address of its first element.
int arr[5];
scanf("%d", arr);      // First element
scanf("%d", &arr[0]);  // Same thing

For strings:
char str[20];
scanf("%s", str);      // Correct
scanf("%s", &str);     // Wrong for beginners; don't use this

Memory trick:
Single variable → use &.
Whole array/string → don't use & (array name is already an address).
One element of an array → use & because it's a single variable.
*/

/*
| Variable                    | `scanf`                  |
| --------------------------- | ------------------------ |
| `int x;`                    | `scanf("%d", &x);`       |
| `float y;`                  | `scanf("%f", &y);`       |
| `char ch;`                  | `scanf(" %c", &ch);`     |
| `int arr[5];` (whole array) | `scanf("%d", arr);`      |
| `int arr[i];`               | `scanf("%d", &arr[i]);`  |
| `char str[20];`             | `scanf("%s", str);`      |
| `char str[i];`              | `scanf(" %c", &str[i]);` |

*/