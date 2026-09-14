#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = { "Aditi", 179, 8.4 };
    printf("name = %s\n", s1.name);
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %.2f\n", s1.cgpa);

    struct student *ptr = &s1;  // here we pointed out to the entire structure
    printf("name = %s\n", (*ptr).name);
    printf("roll no = %d\n", (*ptr).roll);
    printf("cgpa = %.2f\n", (*ptr).cgpa);

    // we can also use -> instead of (*)
    printf("name = %s\n", ptr -> name);
    printf("roll no = %d\n", ptr -> roll);
    printf("cgpa = %.2f\n", ptr -> cgpa);

    return 0;
}