#include <stdio.h>

int main()
{
    int l;
    int b;
    int aor;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    aor=l*b;
    printf("The area of rectangle is: %d", aor);

    printf("\n\n");

    float r;
    float pi;
    pi=3.14;
    float aoc;
    printf("\nEnter radius of circle: ");
    scanf("%f", &r);
    aoc=pi*r*r;
    printf("\nThe area of circle is: %.3f", aoc);

    float h;
    float aocy;
    printf("\n\nEnter height of cylinder: ");
    scanf("%f", &h);
    aocy=pi*r*r*h;
    printf("\nThe volume of cylinder is: %.3f", aocy);

    float cs;
    float fh;
    printf("\n\nEnter temp in celsius: ");
    scanf("%f", &cs);
    fh=((9.0/5.0)*cs)+32;
    printf("\nThe temp in fahrenheit is: %.3f", fh);

    float p;
    int roi;
    int t;
    int si;
    printf("\n\nEnter principle amount: ");
    scanf("%f", &p);
    printf("\nEnter roi: ");
    scanf("%d", &roi);
    printf("\nEnter time: ");
    scanf("%d", &t);
    si=(p*roi*t)/100;
    printf("\nThe simple interest is: %d", si);
    return 0;
}