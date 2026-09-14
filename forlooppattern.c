#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to generate pattern: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}