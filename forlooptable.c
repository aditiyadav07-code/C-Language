#include <stdio.h>

int main()
{
    int n;
    printf("Enter required table: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }

    //reverse table
    int m;
    printf("Enter required table: ");
    scanf("%d", &m);
    for(int i=10; i>=1; i--)
    {
        printf("%d * %d = %d\n", m, i, m*i);
    }

    return 0;
}