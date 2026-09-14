/*for(initialization ; condition ; updation)
{
  do smth  
}
special things- 1) ++i and i++ 2) --i and i-- 3) loop counter can be int/float/char
*/
#include <stdio.h>

int main()
{
    //hello world 5x
    for(int i=1; i<=5; i++)
    {
      printf(" Hello World!");
    }

    printf("\n");

    //printing number from 1 to 10
    for(int i=1; i<=10; i++)
    {
      printf(" %d", i);
    }

    printf("\n");

    //printing number from 1 to 10 reverse
    for(int i=10; i>=1; --i)
    {
      printf(" %d", i);
    }

    printf("\n");

    //alphabets in lower case
    for(char i='a'; i<='z'; i++)
    {
      printf(" %c", i);
    }

    printf("\n");

    //alphabets in upper case
    for(char i='A'; i<='Z'; i++)
    {
      printf(" %c", i);
    }

    printf("\n");
    //print odd numbers between 5 to 50
    for(int i=5; i<=50; i++)
    {
      if(i%2!=0)
      {
        printf(" %d ", i);
      }
    }
    return 0;
}