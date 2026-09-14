#include <stdio.h>

typedef struct address
{
    int housenum;
    int block;
    char city[100];
    char state[100];
} ad;

void printadd(ad add);

int main()
{
    ad add[5];

    printf("\nEnter info for person 1 = ");
    scanf("%d", &add[0].housenum);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city); // Array name automatically gives the address of its first character.
    scanf("%s", add[0].state);

    printf("\nEnter info for person 2 = ");
    scanf("%d", &add[1].housenum);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    printf("\nEnter info for person 3 = ");
    scanf("%d", &add[2].housenum);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);

    printf("\nEnter info for person 4 = ");
    scanf("%d", &add[3].housenum);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    printf("\nEnter info for person 5 = ");
    scanf("%d", &add[4].housenum);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);

    return 0;
}

void printadd(ad add)
{
    printf("\nAddress : %d, %d, %s, %s.", add.housenum, add.block, add.city, add.state);
}

/*
typedef
- typedef creates an alias (shortcut) for a datatype
- doesn't create a new datatype
- improves readability and reduces typing
*/

/*
Passing Structure to Function -
printadd(add[0]);
add[0] is one structure.
The function:
void printadd(ad add) -> expects one structure -> So they match
*/

/*
Array of Structures
- stores multiple objects of same struct
- each index = one complete object

Access Members
- arr[i].member
- [] -> selects object
- .  -> selects member

Struct + Function
- pass one object: func(arr[i])
- function gets a copy (pass by value)

String in Struct
- char array stores string
- use scanf("%s", arr[i].member)
- array name = addr of 1st element
- don't use '&' with string arrays

Memory
- each struct object has its own separate data
- changing one object doesn't affect others

Better Practice
- use loops for repeated input/output
*/

/*
add

+---------+---------+---------+---------+---------+
| add[0]  | add[1]  | add[2]  | add[3]  | add[4]  |
+---------+---------+---------+---------+---------+

Each contains:

+-----------------------------+
| housenum                    |
| block                       |
| city[100]                   |
| state[100]                  |
+-----------------------------+
*/