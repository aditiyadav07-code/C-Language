#include <stdio.h>

// we can use arr[] or *arr both are same
void number(int arr[], int n);

int main()
{
    //array function
    int arr[]={10, 20, 30, 40, 50};
    number(arr, 5);

    //array & pointer
    printf("\n\n");
    printf("%d\n", *(arr));
    printf("%d\n", *(arr + 2)); // 0 + 2 = Index 2
    printf("%d\n", *(arr + 4)); // 0 + 4 = Index 4
    return 0;
}

void number(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

/*
When an array is passed to a function:
number(arr, 5);
the array name arr automatically becomes a pointer to its first element.
Example: arr
becomes: &arr[0]

So inside the function: int arr[] and int *arr
both receive the address of the first element.

Proof these statements are equivalent:
arr[2] and *(arr + 2)
Both access the third element.

For your array:
arr[2] = 30
*(arr+2) = 30

The array name arr represents the address of the first element:
arr == &arr[0]

Pointer arithmetic works in units of the pointed type.
arr + 2 does not mean: 1000 + 2
It means: 1000 + (2 * sizeof(int))
which becomes: 1000 + (2 * 4) = 1008

So: arr + 2 -> points to the address of the third element.



Pointer arithmetic
int arr[] = {10, 20, 30};

int *ptr = arr;
Expression	-   Meaning
ptr         	address of arr[0]
ptr + 1	        address of arr[1]
ptr + 2     	address of arr[2]
The compiler automatically moves by sizeof(int) bytes.

Most important equivalence
arr[i] == *(arr + i)
Examples:
arr[0] == *(arr + 0)
arr[1] == *(arr + 1)
arr[2] == *(arr + 2)
Memorize this. It is asked constantly in exams and interviews.

Address of an element
&arr[i] == arr + i
Examples:
&arr[0] == arr + 0
&arr[1] == arr + 1
&arr[2] == arr + 2
*/