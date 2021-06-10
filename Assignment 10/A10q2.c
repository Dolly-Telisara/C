//Accept a length & width of a rectangle from user print its area. 

#include<stdio.h>

double CalArea(float len, float br)
{
    double area=0.0;
    area=len*br;
    return area;
}

int main()
{
    float l=0.0;
    float b=0.0;
    double ret=0.0;
    printf("Enter Length & Width of Rectangle : ");
    scanf("%f %f",&l,&b);
    
    ret=CalArea(l,b);
    
    printf("Area of a Rectangle is : %lf",ret);
    return 0;
}









































