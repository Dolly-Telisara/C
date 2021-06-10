// Write a program which checks whether 5th & 18th bit is ON or OFF.

/*  Input : 9000    Output : 5th bit ON            Input: 500000    Output : 5th bit is ON
                             18th bit OFF                                    18th bit is ON  
                                                                             
    Input :5000001  Output: 5th bit is OFF
                            18th bit is ON    */

#include<stdio.h>

typedef unsigned int UINT;

void CheckBit(UINT n)
{
   if(((n>>5)&1)==1)
    {
        printf("\n5th bit is ON");
    }
     else
    {
        printf("\n5th bit is OFF");
    }

    if(((n>>18)&1)==1)
    {
        printf("\n18th bit is ON");
    }
    else
    {
        printf("\n18th bit is OFF");
    }
}

int main()
{
    unsigned int num=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    CheckBit(num);
    
    return 0;
}
