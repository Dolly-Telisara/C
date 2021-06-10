// Write a program that accept one number from user and OFF the 7th and 10th bit of that number . Return modified number.

// Input : 577      Output : 1

#include<stdio.h>

typedef unsigned int UINT;

UINT OFFBit(UINT n)
{
    if(((n>>6)&1) && ((n>>9)&1))
    {
        printf("\nThe 7th & 10th bit is ON");

        UINT new = (n & (~((1<<6)) & (~(1<<9))));

        printf("\nAfter switching OFF the 7th & 10th bit the modified number is : %lu",new);
    }
    
    else
    {
        printf("\n The 7th bit is OFF");

        printf("The Output is : %lu",n);
    }
   
}

int main()
{
    unsigned int num=0;
    unsigned int bit=0;

    printf("Enter the number : ");
    scanf("%lu",&num);

    OFFBit(num);

    return 0;
}