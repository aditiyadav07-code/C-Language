#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char c;
    printf("Enter i/I for India and f/F for French: ");
    scanf("%c", &c);
    if(c=='i'||c=='I') {
    namaste();}
    else if(c=='f'||c=='F'){
    bonjour();}
    else{
    printf("Use given characters please!");}
    return 0;
}

void namaste()
{
    printf("Namaste!");
}
void bonjour()
{
    printf("Bonjour!");
}