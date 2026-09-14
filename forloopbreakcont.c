#include <stdio.h>

int main()
{
    //stop after detecting odd number
    int n;
    do
    {
        printf("\nEnter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);
            if(n%2!=0)
            {
                break;
            }
    } while(1);
    printf("Thank you\n");

    printf("\n");
    //skip odd number
    int m;
    do
    {
        printf("\nEnter a number: ");
        scanf("%d", &m);
        
            if(m%2!=0)
            {
                continue;       
            }
            printf("%d\n", m);
    } 
    while(1);
    printf("Thank you\n");

    return 0;
}