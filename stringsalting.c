#include <stdio.h>
#include <string.h>
void salting(char password[]);

int main()
{
    char password[100];
    printf("Enter password: ");
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = '\0';
    // can use scanf here for convenience (%s)
    salting(password);
    return 0;
}

void salting(char password[])
{
    char salt[100]= "1997";
    printf("Password is: ");
    strcat(salt, password);
    puts(salt);
}

// fgets() stores '\n'
// remove using:
// str[strcspn(str, "\n")] = '\0';

// salting = add fixed string to password