#include <stdio.h>
int sum(int a, int b);
int table(n);
int main()
{
    int a,b,n;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    int s=sum(a, b);  //argument-->actual parameter
    printf("The sum of a and b  is: %d\n", s);

    printf("Enter required table: ");
    scanf("%d", &n);
    table(n);
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

int table(int m)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", m, i, m*i);
    }
}

/*
1. Function can only return one value at a time
2. Changes to parameters in function don't change the values in calling function
Because a copy of argument is passed to the function
*/