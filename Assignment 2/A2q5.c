//Accept a number from user & check whether it is even or odd

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int no)
{
    if((no%2)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int value=0;
    int res=0;
    printf("enter the number: ");
    scanf("%d",&value);

    res=check(value);
    
    if(res==1)
    {
        printf("The entered number is EVEN");
    }
    else if(res==0)
    {
        printf("The entered number is ODD");
    }
}
