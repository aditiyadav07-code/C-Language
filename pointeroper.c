#include <stdio.h>

void operations(int a, int b, int *sum, int *product, int *avg);

int main()
{
    int a=50, b=10, sum, product, avg;
    printf("a=%d  b=%d\n", a, b);

    operations(a, b, &sum, &product, &avg);
    printf("Sum: %d\nProduct:%d\nAverage:%d\n", sum, product, avg);
    
    return 0;
}

void operations(int a, int b, int *sum, int *product, int *avg)
{
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
}

/*
Using pointers to return multiple values from a function.

a, b      -> input values
sum       -> stores sum of a and b
product   -> stores product of a and b
avg       -> stores average of a and b

&sum, &product, &avg -> addresses passed to function

*sum      -> updates original sum variable
*product  -> updates original product variable
*avg      -> updates original avg variable

Pointers allow a function to modify multiple variables at once.
*/

/*
In the function definition: int *sum
int operations(int a, int b, int *sum, int *product, int *avg)

This says:
The parameter sum will receive an address of an integer.
So if &sum from main() was 1000, then inside the function:
sum = 1000;
where sum is now a pointer.
sum = 1000

*sum means:
Go to address 1000 and access the integer stored there.
So:
*sum = a + b;
stores the result in the original variable from main().

&x → get the address of x
int *p → declare p as a pointer that stores an address
*p → access the value at the address stored in p

That's why you pass &sum and receive it as int *sum.
*/