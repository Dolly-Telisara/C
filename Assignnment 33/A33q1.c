// Write a program that accept a number from user and OFF the 7th bit of that number if it is ON. Return modified number.

// Input : 79         Output : 15

#include<stdio.h>

typedef unsigned int UINT;

UINT OFFBit(UINT n,UINT k)
{
    if(k<=0)
    {
        return n;
    }

     if((n>>(k-1))&1)     //To check if the kth bit is ON 
    {
        printf("\n The bit  %lu  is ON in the given number %lu .",k,n);

        UINT new =(n & ~(1<<(k-1)));
        
        printf("\nAfter switching OFF the bit %lu the modified number is : %lu",k,new);
    }
    else
    {
        printf("\nThe bit  %lu is OFF in given number %lu",k,n);
      
        printf("\nTherefore the Output is : %lu",n);
    }
    
}

int main()
{
    unsigned int num=0;
    unsigned int bit=0;

    printf("Enter the number : ");
    scanf("%lu",&num);

    printf("Enter the bit that u have to OFF : ");
    scanf("%lu",&bit);
    
    OFFBit(num,bit);

    return 0;
}