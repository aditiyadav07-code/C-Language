#include <stdio.h>

void reverse(int arr[], int m);
void printarr(int arr[], int m);

int main()
{
    //fibonacci series
    int n;
    printf("Enter the number for fibonacci series: ");
    scanf("%d", &n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t%d\t", fib[0], fib[1]);

    for(int i=2; i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t", fib[i]);
    }

    //reversing an array
    int arr[]={100, 90, 80, 70, 60, 50};
    reverse(arr, 6);
    printarr(arr, 6);
    return 0;
}

void reverse(int arr[], int m)
{
    for(int i=0; i<m/2; i++)
    {
        int firstvalue=arr[i];
        int secondvalue=arr[m-i-1];
        arr[i]=secondvalue;
        arr[m-i-1]=firstvalue;
    }
}

void printarr(int arr[], int m)
{
    printf("\n");
    for(int i=0; i<m; i++)
    {
        printf("%d\t", arr[i]);
    }
}

/*
For reversing an array:
lastIndex = size - 1

If current index is i,
opposite index = lastIndex - i
So:
opposite index = (size - 1) - i
               = size - i - 1

Swap arr[i] with arr[size - i - 1].
Only iterate till size/2 because one swap fixes two positions.
*/