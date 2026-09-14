#include <stdio.h>

void Table(int arr[][10], int n, int number);

int main()
{
    int table[2][10];
    Table(table, 0, 5);

    int marks[2][3]; //  /---/---/---/
    printf("\nEnter student marks (0) for three subjects= ");
    scanf("%d %d %d", &marks[0][0], &marks[0][1], &marks[0][2]);
    printf("\nStudent (0) marks:  %d\t%d\t%d\t", marks[0][0], marks[0][1], marks[0][2]);

    printf("\n\nEnter student marks (1) for three subjects= ");
    scanf("%d %d %d", &marks[1][0], &marks[1][1], &marks[1][2]);
    printf("\nStudent (0) marks:  %d\t%d\t%d\t", marks[1][0], marks[1][1], marks[1][2]);

    return 0;
}

void Table(int arr[][10], int n, int number)
{
    for(int i=0; i<10; i++)
    {
        arr[n][9]=number*(i+1);
        printf("%d\n", arr[n][9]);
    }
}

/*
table

       0   1   2   3   4   5   6   7   8   9
Row 0 [2] [4] [6] [8] [10][12][14][16][18][20]

Why arr[][10] and not arr[][]?
For a 2D array parameter, C must know the number of columns.
Valid:  int arr[][10]
Invalid: int arr[][]
The compiler needs the column size to calculate memory locations.

Concept: Passing 2D Arrays to Functions

- A 2D array can be passed to a function.
- Column size must be specified in function parameters.
- arr[row][column] is used to access elements.
- storeTable() stores a multiplication table in a specific row.
- number*(i+1) generates table values.
- table[2][10] means 2 rows and 10 columns.
- Arrays are passed by reference, so changes inside the function affect the original array.

A useful analogy:
int x = 5;
printf("%d", x); -> You pass x, not x=.

Likewise:
int table[2][10];
Table(table, 0, 5); -> You pass table, not table[].
The array name alone identifies the array.
*/