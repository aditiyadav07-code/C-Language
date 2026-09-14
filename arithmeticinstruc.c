#include <stdio.h>

int main()
{
    int a=10, b=20, c=30;

    //VALID-
    a=b+c;
    a=b*c;
    a=b/c;

    /* INVALID-
    b+c=a;
    a=bc
    a=b^c */

    printf("%d\n", 5%2);
    printf("%d\n", -5%2);

    //TYPE CONVERSION-
    printf("\nThe sum of 3 and 2: %d", 3+2);
    printf("\nThe sum of 3 and 2: %.3f", 3+2.0);
    printf("\nThe sum of 3 and 2: %.3f", 3.0+2.0);

    //ASSOCIATIVITY-
    printf("\n\nOutput: %d", 5+2/2*3);

    return 0;
}