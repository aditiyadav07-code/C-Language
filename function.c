#include <stdio.h>

//Declaration or function prototype
void Helloworld();

int main()
{
    Helloworld();
    Helloworld();
    Helloworld();
    Helloworld();
    return 0;
}

//Function definition
void Helloworld()
{
    printf("Hello World!\n");
}

/*
Properties:
-Execution always starts from main
-A function gets called directly or indirectly from main
-There can be multiple functions in program
*/