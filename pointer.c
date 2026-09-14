//pointer stores address of another variable
#include <stdio.h>

int main()
{
    int age=18;
    int *ptr=&age;
    int _age=*ptr;
    printf("The value is (age)= %d\n",age); //18
    printf("The value is (_age)= %d\n",_age); //18
    printf("The value is (*ptr)= %d\n",*ptr); //18
    printf("The value is *(&age): %d\n", *(&age)); //18


    printf("The address is (&age): %p\n", &age);  //address of age
    printf("The address is (&ptr): %p\n", &ptr);  //address of ptr
    printf("The address is (ptr): %p\n", ptr);  //address of age stored in ptr

    /*

    age   -> stores actual value (18)
    &age  -> address of age variable
    ptr   -> stores address of age (same as &age)
    *ptr  -> value stored at address ptr points to (18)
    &ptr  -> address of pointer variable ptr itself
    *(&age) -> value at address of age (same as age)
    int *ptr = &age  -> pointer variable ptr stores address of age
    int **ptr2 -> pointer to pointer (stores address of another pointer variable)

    NOTE:
    *  -> dereference operator (value at address)
    &  -> address-of operator

    */

    return 0;
}