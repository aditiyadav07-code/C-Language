/*do
{
do smth;
}
while(condition;)*/
#include <stdio.h>

int main()
{
    int i;

    //numbers 1 to 10
    i=1;
    do
    {
        printf("%d ", i);
        i++;
    }
    while(i<=10);

    printf("\n");

    //sum of n natural numbers
    i=1;
    int n;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("%d", sum);

    return 0;
}