//Accept a number from user & return the difference between the Summation of Even digits & Summation of Odd digits. 

#include<stdio.h>

int Difference(int no)
{
    int diff=0;
    int res=0;
    int addE=0;
    int addO=0;
    while(no!=0)
    {
        res=no%10;
        if((res%2)==0)
        {
            addE=addE+res;
        }
        
        else if((res%2)!=0)
        {
            addO=addO+res;
        }
         no=no/10;
    }
        printf("\n Summation of Even digits is : %d",addE);
        printf("\n Summation of Odd digits is : %d",addO);
        diff=addE-addO;
        return diff;
}

int main()
{
    int value=0;
    int ret=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    ret=Difference(value);
    printf("\n Difference between the Summation of Even digits & Summation of Odd digits : %d",ret);
    return 0;
}