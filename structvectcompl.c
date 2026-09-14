#include <stdio.h>

// vector
typedef struct vector
{
    int x;
    int y;
} ve;

// complex number
typedef struct complex
{
    int real;
    int img;
} co;


void calcvecsum(ve v1, ve v2, ve *sum); // Function Prototype/ declaration

int main()
{
    // vector
    ve v1 = {18, 20};
    ve v2 = {7, 27};
    ve sum = {0};
    calcvecsum(v1, v2, &sum);

    // complex number
    co num = {27, 39};
    co *ptr = &num;
    printf("\nReal part -> %d\n", ptr->real);  // (*ptr).real
    printf("Imaginary part -> %d\n", ptr->img);

    return 0;
}

void calcvecsum(ve v1, ve v2, ve *sum)
{
    sum->x = v1.x + v2.x;   // AFTER -> . -> ONLY STRUCT DEFINED VARIABLE
    sum->y = v1.y + v2.y;
    printf("sum of x = %d\n", sum->x);
    printf("sum of y = %d\n", sum->y);
}

/*

Struct Pointer
- stores address of a struct object
- declare: struct_type *ptr;
- initialize: ptr = &object;

Member Access
- object.member   -> struct variable
- ptr->member     -> struct pointer
- ptr->member == (*ptr).member

Operators
- .  -> access using object
- -> -> access using pointer

typedef
- creates alias for datatype
- makes struct declarations shorter

Remember
- '.' for variables
- '->' for pointers

*/