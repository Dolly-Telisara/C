//Accept amount in US dollar & return its corressponding value in Indian currency, 1 $ = 70 rs

#include<stdio.h>

int currency(int dollar)
{
    int rupees=0;
    rupees=dollar*70;
    printf("\n-------------------");
    printf(" \n %d $ = %d rs",dollar,rupees);
    printf("\n-------------------");
}

int main()
{
    int amount=0;
    printf("Enter a Amount in Dollars : ");
    scanf("%d",& amount);

    currency(amount);
    return 0;
}