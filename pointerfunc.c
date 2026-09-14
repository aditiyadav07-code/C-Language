#include <stdio.h>

int square(int n);
int _square(int *n);

int main()
{
    int n;
    printf("Enter required square number: ");
    scanf("%d", &n);
    square(n);

    printf("n= %d\n", n);

    _square(&n);
    printf("The square is: %d\n",n);

    printf("n= %d\n", n);

    return 0;
}

//call by value
int square(int n)
{
    n=n*n;
    printf("The square is: %d\n",n);
}

//call by reference
int _square(int *n)
{
    *n=*n * *n;
    printf("The square is: %d\n", *n);
}

    /*
    
    | Type              | Function      | Effect on original n |
    | ----------------- | ------------- | -------------------- |
    | Call by value     | square(n)   | No change            |
    | Call by reference | _square(&n) | Changes value        |

    Call by Value:
    - Copies value into function
    - Changes do NOT affect original variable

    Call by Reference:
    - Passes address using pointer
    - Changes affect original variable

    Key:
    n   -> value
    &n  -> address
    *n  -> value at address

    */