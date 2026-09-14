#include <stdio.h>

int main()
{
    int n;
    int f=1;
    printf("Enter required factorial: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("%d", f);

    printf("\n");
    int sum=0;
    for(int i=5; i<=50; i++)
    {
        sum+=i;
    }
    printf("Sum from 5 to 50 is: %d", sum);
    return 0;
}