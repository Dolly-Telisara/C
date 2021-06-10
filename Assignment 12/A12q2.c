//Accept a number from user & check whether it contains 0 in it or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0 

BOOL CheckZero(int no)
{
       int res=0;
       while(no!=0)
       {
        res=no%10;
       // printf("\t%d",rev);
        
        if(res==0)
        {
            return TRUE;
        }
        no=no/10;
    } 
}

int main()
{
    int value=0;
    BOOL ret=FALSE;
    printf("Enter a number : ");
    scanf("%d",&value);

    ret=CheckZero(value);
    if(ret==TRUE)
    {
        printf("The given number Contains Zero");
    }
    else 
    {
        printf("The given number DOES NOT Contain Zero");
    }
    
    return 0;
}
