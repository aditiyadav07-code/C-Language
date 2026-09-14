/*switch(num)
case c1: //do smth
break;
case c2: //do smth
break;
default: //do smth -> not necessary
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number from 1 to 5: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1: printf("The entered number is 1");
        break;
        case 2: printf("The entered number is 2");
        break;
        case 3: printf("The entered number is 3");
        break;
        case 4: printf("The entered number is 4");
        break;
        case 5: printf("The entered number is 5");
        break;
        default: printf("The entered number is invalid");
        break;
    }

    char day;
    printf("\nEnter the day (m,t,w,T,f,s,S): ");
    scanf(" %c", &day);
    switch(day)
    {
        case 'm': printf("Have a great Monday!");
        break;
        case 't': printf("Have a great Tuesday!");
        break;
        case 'w': printf("Have a great Wednesday!");
        break;
        case 'T': printf("Have a great Thursday!");
        break;
        case 'f': printf("Have a great Friday!");
        break;
        case 's': printf("Have a great Saturday!");
        break;
        case 'S': printf("Have a great Sunday!");
        break;
        default: printf("The entered day is invalid");
        break;
    }
    return 0;
}