#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("eligible for permanent driving license.\n");
    }
    else if(age>=13 && age<18)
    {
        printf("eligible for temporary driving license.\n");
    }
    else if(age>=10 && age<13)
    {
        printf("eligible for learning driving.\n");
    }
    else
    {
        printf("How about driving a remote control car?\n");
    }
    return 0;
}