#include <stdio.h>

void hello();
void bye();

int main()
{
    hello();
    bye();
    bye();
    return 0;
}

void hello()
{
    for(int i=1; i<=5; i++)
    {
        printf("Hello World!\n");
    }
}

void bye()
{
    printf("Goodbyeee!\n");
}