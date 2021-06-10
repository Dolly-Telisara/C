// Write a program that checks whether 7th & 15th & 21st , 28th bit is ON or OFF.
/* Input: 900012222
  Output :  The 7th bit is ON
            The 15th bit is OFF
            The 21st bit is ON
            The 28th bit is ON  */

#include<stdio.h>

typedef unsigned int UINT;

void CheckBit(UINT n)
{
    if((n>>7)&1)  
    {
        printf("\nThe 7th bit is ON");
    }

    else
    {
        printf("\nThe 7th bit is OFF");
    }
    
    if((n>>15)&1)
    {
        printf("\nThe 15th bit is ON");
    }

    else
    {
        printf("\nThe 15th bit is OFF");
    }
    
    if((n>>21)&1)
    {
        printf("\nThe 21st bit is ON");
    }

    else
    {
        printf("\nThe 21st bit is OFF");
    }
    
    if((n>>28)&1)
    {
        printf("\nThe 28th bit is ON");
    }

    else
    {
        printf("\nThe 28th bit is OFF");
    }
    
}

int main()
{
    unsigned int no=0;

    printf("Enter the number : ");
    scanf("%lu",&no);

    CheckBit(no);

    return 0;
}
