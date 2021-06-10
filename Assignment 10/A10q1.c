//Accept a Radius of a circle from user print its area. Take pi=3.14

#include<stdio.h>

double CalArea(float rd)
{
    float pi=3.14;
    double area=0.0;
    area=pi*rd*rd;
    return area;
}

int main()
{
    float r=0.0;
    double ret=0.0;
    printf("Enter radius of a circle : ");
    scanf("%f",&r);
    
    ret=CalArea(r);
    
    printf("Area of a circle with radius %f is : %lf",r,ret);
    return 0;
}









































