//Accept a number from user & return multiplication of all its digit.

#include<stdio.h>

int MultiplyDigits(int no)
{
    int res=0;
    int mult=1;

    while(no!=0)
    {
        res=no%10;
        
        if(res==0)
        {
             res=1;
        }
        mult=mult*res;
        no=no/10;
    }
    
    return mult;
}

int main()
{
    int value=0;
    int ret=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    ret=MultiplyDigits(value);

    printf("Multiplication of all digits of %d is : %d",value,ret);
    return 0;
}