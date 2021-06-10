//Accept area in square feet & convert it into square meter. (1 sq feet = 0.0929 sq meter)

#include<stdio.h>

double CalAreaMeter(float Asqft)
{
    double area=0.0;
    area=Asqft*0.0929;
    return area;
}

int main()
{
    float Areasqft=0.0;
    double ret=0.0;
    printf("Enter Area in sq feet : ");
    scanf("%f",&Areasqft);

    ret=CalAreaMeter(Areasqft);
    printf("----------------------------------");
    printf("\n Area in Square Meter is : %lf",ret);
    printf("\n---------------------------------");
    return 0;
}