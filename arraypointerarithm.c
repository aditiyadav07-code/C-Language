#include <stdio.h>

int main()
{
    // CODE 01
    int aadhar[5];
    int *ptr=aadhar;

    //Input
    for(int i=0; i<5; i++)
    {
        printf("%d Index: ", i);
        scanf("%d", ptr);
        ptr++;
    }

    // Reset pointer to the start of the array
    ptr=aadhar;
    printf("\n");

    //Output
    for(int i=0; i<5; i++)
    {
        printf("%d Index: %d\n", i, *ptr);
        ptr++;
    }

    //CODE 02
    int age=18;
    int *ptr1=&age;

    int _age=19;
    int *_ptr1 = &_age;

    printf("%p\n", ptr1);  //address of age
    ptr1++;
    printf("%p\n", ptr1);  //address of age + 1 (4)
    ptr1--;
    printf("%p\n", ptr1);  //adress of age

    printf("%td\n", ptr1 - _ptr1);

    ptr1=&_age;
    printf("%d\n", ptr1 == _ptr1); // true -> 1

    return 0;
}

/*
Concept: Pointer Arithmetic and Comparison

- A pointer stores the address of a variable.
- ptr++ moves to the next element of the pointer's type.
- For int*, ptr++ usually moves 4 bytes.
- ptr-- moves back by one element.
- %p is used to print addresses.
- Pointer subtraction returns distance in elements, not bytes.
- Pointer subtraction is valid only for pointers within the same array.
- ptr1 == ptr2 compares addresses.
- If two pointers store the same address, comparison returns 1 (true).
*/