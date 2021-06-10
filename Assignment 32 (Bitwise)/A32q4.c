// Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.

#include<stdio.h>

typedef unsigned int UINT;

void CheckBit(UINT n)
{
   if(((n>>7)&1)==1) 
    {
        printf("\n7th bit is ON");
    }
     else
    {
        printf("\n7th bit is OFF");
    }

    if((n>>8)&1)
    {
        printf("\n8th bit is ON");
    }
    else
    {
        printf("\n8th bit is OFF");
    }

    if((n>>9)&1)
    {
        printf("\n9th bit is ON");
    }
    else
    {
        printf("\n9th bit is OFF");
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
