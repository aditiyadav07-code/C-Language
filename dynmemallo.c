#include <stdio.h>
#include <stdlib.h>
int main()
{
    // SIZE OF OPERATOR
    printf("size of int = %d\n", sizeof(int));
    printf("size of float = %d\n", sizeof(float));
    printf("size of char = %d\n", sizeof(char));
    printf("size of double = %d\n\n", sizeof(double));

    // MALLLOC()
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter number(5) %d: ", i + 1);
        scanf("%d", &ptr[i]);
        // scanf("enter number : %d", &ptr[i]); -> scanf does not print prompts
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nnumber %d = %d", i + 1, ptr[i]);
    }

    // FREE POINTER()
    free(ptr);

    // CALLOC()
    // intitialing the data is 0 in every index
    int *ptr1 = (int *)calloc(6, sizeof(int));

    if (ptr1 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter number2 %d: ", i + 1);
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("\nnumber2 %d = %d", i + 1, ptr1[i]);
    }
    free(ptr1);

    // REALLOC()

    int *ptr2 = (int *)calloc(6, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter number3 %d: ", i + 1);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nNumber3 %d = %d", i + 1, ptr2[i]);
    }

    ptr2 = (int *)realloc(ptr2, 7 * sizeof(int) ); // REALLOCATION

    if (ptr2 == NULL)
    {
        printf("\nMemory allocation failed.\n");
        return 1;
    }
    for (int i = 5; i < 7; i++)
    {
        printf("\nEnter number(7) %d: ", i + 1);
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("\nNumber3 %d = %d", i + 1, ptr2[i]);
    }
    free(ptr2);
    return 0;
}

/*
Why NULL check? -> if(ptr == NULL)
If memory couldn't be allocated, ptr = NULL
Trying to use it would cause undefined behavior.

Accessing Dynamic Array -> ptr[i]
Exactly the same as: *(ptr + i)
Dynamic arrays behave like normal arrays
*/

/*
malloc()

ptr = (int *)malloc(5 * sizeof(int));
Requests memory from the heap.
If int = 4 bytes: 5 × 4 = 20 bytes

free()

free(ptr);
Returns the allocated memory back to the operating system.
After this: Heap memory is no longer yours.
Don't use ptr[i] after free().

calloc()

calloc(6, sizeof(int));
Allocates memory and initializes every byte to 0.
Initially: 0 0 0 0 0 0
Then your scanf() overwrites those values.

realloc()

ptr2 = realloc(ptr2, 7 * sizeof(int));
Changes the size of previously allocated memory.
Can: increase memory & decrease memory

Existing data is preserved (up to the smaller of old/new sizes).
Example:
Before: 10 20 30 40 50
After expanding: 10 20 30 40 50 ? ?
The new elements are not initialized by realloc().

If the old location has no room to grow, 
realloc() may move the block to a new location and update the returned pointer.
*/

/*
Static Array
int arr[5];
        ↓
Memory allocated automatically (stack)

Dynamic Array
int *ptr = malloc(...);
        ↓
Memory allocated manually (heap)

The syntax to access elements is the same (arr[i] or ptr[i]), 
but with dynamic memory you are responsible for allocating and freeing it. 
That's the core idea behind malloc(), calloc(), realloc(), and free().
*/