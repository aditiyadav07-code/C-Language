#include <stdio.h>
#include <math.h>

void calculateprice(float value);
void power(int num);
float arearect(float a, float b);
float areasq(float s);
float areacir(float r);
float ctof(float c);
float calcperc(float sc, float m, float h);

int main()
{
    float value=100;
    calculateprice(value);

    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    power(num);

    float a,b;
    printf("\nEnter length: ");
    scanf("%f", &a);
    printf("\nEnter breadth: ");
    scanf("%f", &b);
    printf("Area of rectangle: %.3f", arearect(a, b));

    float s;
    printf("\nEnter side: ");
    scanf("%f", &s);
    printf("Area of square: %.3f", areasq(s));

    float r;
    printf("\nEnter radius: ");
    scanf("%f", &r);
    printf("Area of circle: %.3f", areacir(r));

    float c;
    printf("\nEnter temperature in celsius: ");
    scanf("%f", &c);
    printf("Temperature in fahrenheit: %.3f", ctof(c));

    float sc=93; float m=95; float h=90;
    printf("\nPercentage: %f", calcperc(sc, m, h));

    return 0;
} 

 //print amount with gst using function
void calculateprice(float value)
{
    value=value+(0.18*value);
    printf("The amount is: %.3f", value);
}

//print power of any number
void power(int num)
{
    printf("The cube of %d is: %.3lf", num, pow(num, 3));
}

//calculate area of rectangle, square and circle
float arearect(float a, float b)
{
    return a*b;
}

float areasq(float s)
{
    return s*s;
}

float areacir(float r)
{
    return 3.14*r*r;
}

//celsius to farenheit
float ctof(float c)
{
    return c*(9.0/5.0)+32;
}

//calculate percentage
float calcperc(float sc, float m, float h)
{
    return ((sc+m+h)/3);
}