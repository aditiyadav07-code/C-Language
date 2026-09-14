#include <stdio.h>

int main()
{
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("The value is (i)= %d\n",i); //5
    printf("The value is (**pptr)= %d\n",**pptr); //5
    printf("The value is (*ptr)= %d\n",*ptr); //5
    printf("The value is *(&i): %d\n", *(&i)); //5


    printf("The address is (&i): %p\n", &i);  //address of i
    printf("The address is (&ptr): %p\n", &ptr);  //address of ptr
    printf("The address is (ptr): %p\n", ptr);  //address of i stored in ptr
    printf("The address is (&pptr): %p\n", &pptr);  //address of pptr
    printf("The address is (pptr): %p\n", pptr);  //address of ptr stored in pptr

    /*
    Pointer to pointer (double pointer concept)

    i     -> stores actual value (5)
    ptr   -> stores address of i
    pptr  -> stores address of ptr

    *ptr   -> value at address stored in ptr (i.e., 5)
    **pptr -> value at address stored in ptr via pptr (i.e., 5)

    &i    -> address of i
    &ptr  -> address of ptr
    &pptr -> address of pptr

    pptr  -> holds address of ptr
    *pptr -> gives ptr (address of i)
    **pptr -> gives value of i
    
    */
    return 0;
}