/*while(condition)
{
do smth
}
*/
#include <stdio.h>

int main()
{
    int i;

    //hello world 5x
    i=1;
    while(i<=5)
    {
        printf("Hello World!  ");
        i++;
    }

    printf("\n");

    //1 to 10 numbers
    i=1;
    while(i<=10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    //1 to 10 reversed number
    i=10;
    while(i>=1)
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}