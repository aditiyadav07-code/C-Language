#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printinfo(struct student s1);//declared function after structure or else it would've caused an error
// because compiler won't know the datatype struct
int main()
{
    struct student s1={"Aryan", 134, 7};  // Creates and initializes a structure
    printinfo(s1);
    return 0;
}

void printinfo(struct student s1)
{
    printf("Student Info :\n");
    printf("name = %s\n", s1.name);
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %.2f\n", s1.cgpa);
}

/*
- By default, struct is passed by value
One thing to remember:
- Passing an int to a function copies 4 bytes.
- Passing a struct copies the entire structure (could be hundreds of bytes). 
That's why pointers are often used with structures.
*/