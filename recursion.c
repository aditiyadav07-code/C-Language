#include <stdio.h>

void hello(int count);
int sum(int n);
int factorial(int m);
int fibo(int o);

int main()
{
    hello(5);

    printf("\nThe sum is: %d", sum(5));

    int m;
    printf("\nEnter required factorial number: ");
    scanf("%d", &m);
    printf("\nThe factorial is: %d", factorial(m));

    int f;
    printf("\nEnter required fibonacci series: ");
    scanf("%d", &f);
    for(int i=0; i<=f; i++)
    {
        printf("%d ", fibo(i));
    }

    return 0;
}

//hello world 5x
void hello(int count) 
{
    if(count==0)
    return;
    printf("Hello World!\n");
    hello(count-1);
}

//sum of first n natural number --> sum=(n-1)+n
int sum(int n)
{
    if(n==1){
    return 1;}
    int sumnm1=sum(n-1);
    int sumn=sumnm1+n;
    return sumn;
}

//factorial of n numbers --> fact=n(n-1)
int factorial(int m)
{
    if(m==1)
    return 1;
    int fact1=factorial(m-1);
    int fact=fact1*m;
    return fact;
}

//fibonacci series --> f(n)=f(n-1)+f(n-2)
int fibo(int o)
{
    if(o==0)
    {
        return 0;
    }
    if(o==1)
    {
        return 1;
    }
    int num1=fibo(o-1);
    int num2=fibo(o-2);
    return num1+num2;
}