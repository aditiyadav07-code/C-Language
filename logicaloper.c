#include <stdio.h>

int main()
{
    printf("%d\n", 4<5 && 4<6);   
    printf("%d\n", 4<5 && 7<6);

    printf("%d\n", 4<5 || 4<6);
    printf("%d\n", 4>5 || 4<6);
    printf("%d\n", 4>5 || 4>6);

    printf("%d\n", !(4<5 && 4<6));
    printf("%d\n", !(4>5 || 4>6));

    return 0;
}