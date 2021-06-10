//Accept the temperature in Fahrenheit & convert it into Celsius. (1 C = (F - 32) * (5/9))

#include<stdio.h>

float FhToCs(int F)
{
    float C=0;
    C = (F-32)*0.555555;
    return C;
}

int main()
{
    int f=0;
    float ret=0;
    
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%d",&f);

    ret=FhToCs(f);
    printf("----------------------------------");
    printf("\nTemperature in Celsius is : %f",ret);
    printf("\n----------------------------------");
    return 0;
}