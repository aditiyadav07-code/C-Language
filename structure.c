#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

// bank account
typedef struct bank
{
    int accountno;
    char namee[100];
} ba;

int main()
{
    struct student s1;
    s1.roll=139;
    s1.cgpa=9.4;
    // s1.name -> will throw an error because arrays cannot be assigned using =
    // s1.name would work -> char *name;
    strcpy(s1.name, "Aditi");
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %.2f\n", s1.cgpa);
    printf("name = %s\n", s1.name);

    struct student s2;
    s2.roll=158;
    s2.cgpa=8.4;
    strcpy(s2.name, "Ann");
    printf("roll no = %d\n", s2.roll);
    printf("cgpa = %.2f\n", s2.cgpa);
    printf("name = %s\n", s2.name);

    struct student s3={123, 6.1, "dona"};   // initializing struct in one go
    printf("roll no = %d\n", s3.roll);
    printf("cgpa = %.2f\n", s3.cgpa);
    printf("name = %s\n", s3.name);

    // bank account
    ba acc1 = {1990, "King"};
    ba acc2 = {1999, "Queen"};
    ba acc3 = {1950, "Priest"};
    printf("\nAccount number = %d\n", acc2.accountno);
    printf("Name = %s\n", acc2.namee);

    return 0;
}

/*     ARRAY ≠ POINTER

ARRAY NAME USUALLY CONVERTS TO A POINTER TO ITS FIRST ELEMENT.
THAT'S WHY THEY OFTEN LOOK THE SAME.      */ 

/*
Array vs Pointer

- Array and pointer are NOT same
- Array name usually becomes addr of 1st element
- arr == &arr[0] in most expressions

Array:
- fixed memory block
- can't reassign
- sizeof(arr) = total array size

Pointer:
- stores an address
- can point elsewhere
- sizeof(ptr) = pointer size

Valid:
ptr = "World";

Invalid:
arr = "World";

Array decays to pointer when passed to functions
That's why arrays and pointers often look similar.
*/

/*
House analogy:
Pointer = address of the house
Array   = actual house/building

Formal version:
Pointer = stores a memory address
Array = memory block containing elements

Array name behaves like a pointer.
Array itself is not a pointer.
*/

/*
Why arrays aren't pointers:
int arr[5];
arr is that entire reserved block:
┌─────────────────┐
│10│20│30│40│50│
└─────────────────┘
while:  int *ptr = arr;
is just:
ptr
 ↓
1000
A pointer only stores the starting address.
It does not contain the block.

int x;        // memory block of 4 bytes
char name[6]; // memory block of 6 bytes
int arr[5];   // memory block of 20 bytes
*/