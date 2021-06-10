// Write a program that checks whether first and last bit is ON or OFF . First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>

typedef unsigned int UINT;

void CheckBit(UINT n)
{
    int x=1;
    int y=32;

    if(n&x)
    {
        printf("\n\t 1st bit is ON");
    }
    else
    {
        printf("\n\t 1st bit is OFF");
    }

    if(n>>(y-1))
    {
        printf("\n\tThe 32th bit is ON");
    }
    else
    {
        printf("\n\tThe 32th bit is OFF");
    }
    
    
}

int main()
{
    unsigned int num=0;

    printf("Enter a number : ");
    scanf("%lu",&num);

    CheckBit(num);
    
    return 0;
}