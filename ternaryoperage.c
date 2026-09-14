// Condition ? do something if TRUE : do something if FALSE
#include <stdio.h>

int main()
{
    int age;
    for(int i=1; i<=2; i++)
    {
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("Adult.\n") : printf("Not an adult.\n");
    }

    int luckynum=7;
    int number;
    for(int i=1; i<=2; i++)
    {
    printf("\nEnter the lucky number: ");
    scanf("%d", &number);
    number==luckynum?printf("lucky number"):printf("not lucky number");
    }
    return 0;
}