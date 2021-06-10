// Write a program which checks whether 15th bit is ON or OFF.
//Bits from 0 to 31.

#include<stdio.h>

typedef int BOOL;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT n,UINT k)
{
    
     //To check if the bit is ON or OFF 

       int new = n>>k;           

        if((new & 1)==1)
        {
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
}  


int main()
{
    unsigned int no=0;
    unsigned int bit=0;
    
    BOOL ret=FALSE;   
    
    printf("Enter a number : ");
    scanf("%d",&no);
    
    printf("\n Enter a bit number to check whether it is ON or Not : ");
    scanf("%d",&bit);
     
    ret=CheckBit(no,bit);

    if(ret==TRUE)
    {
        printf("\t Bit  %d  is ON ",bit);
    }   
    
    else
    {
         printf("\t Bit %d  is OFF ",bit);
    }
    
    return 0;
}
