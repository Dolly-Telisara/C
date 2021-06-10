//Accept one number from user and check whether that number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int no)
{
    if(no>100)
     return TRUE;
    else 
      return FALSE;
} 

int main()
{
    int value=0;
     BOOL ret=FALSE;
    printf("Enter a number: ");
    scanf("%d",&value);

    ret=CheckGreater(value);

    if(ret==1)
    {
        printf("%d is GREATER than 100",value);
    }
    else 
    {
        printf( "SMALLER");
    }
    return 0;
}