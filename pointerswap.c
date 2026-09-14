#include <stdio.h>

void _swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a=5, b=3;
    printf("The values before swapping:\na=%d  b=%d\n", a, b);

    _swap(a, b);
    swap(&a, &b);
    printf("The values after swapping:\na=%d  b=%d\n", a, b);
    return 0;
}

//call by value
void _swap(int a, int b)
{
    int temp=a; //t=5
    a=b; //a=3
    b=temp; //b=5
    printf("The values after swapping:\na=%d  b=%d\n", a, b);
}

//call by reference
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("The values after swapping:\na=%d  b=%d\n", *a, *b);
}


/*
SWAP PROGRAM: CALL BY VALUE vs CALL BY REFERENCE
----------------------------------------------------
CALL BY VALUE (_swap):
- Copies values of a and b into function
- Swapping happens only on copies
- Original values in main() remain unchanged
----------------------------------------------------
CALL BY REFERENCE (swap):
- Passes addresses of a and b
- Function modifies actual variables using pointers
- Original values in main() are swapped
----------------------------------------------------
KEY:
a, b   -> values
&a, &b -> addresses
*a, *b -> values at those addresses
----------------------------------------------------
RESULT:
_swap(a, b)        -> no change in main variables
swap(&a, &b)       -> swaps actual variables
*/