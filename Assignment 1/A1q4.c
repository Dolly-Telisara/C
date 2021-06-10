//Accept one number & check whether it is divisible by 5 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int no)
{
    if((no%5)==0)
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
    int value=0;
    BOOL ret=FALSE;
    
    printf("Enter number : ");
    scanf("\n %d" , &value);

    ret = check(value);

    if(ret == TRUE)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("Not divisible by 5");
    }
    return 0;
}