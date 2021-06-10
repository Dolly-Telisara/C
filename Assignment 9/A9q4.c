//Write a program to find ODD factorial of given number

#include<stdio.h>

int OddFact(int no)
{
    int i=0;
    int fact=1;
    if(no<0)
    {
        no = -no;
    }

    printf("\n Odd Factors of %d is : ",no);
           
    for(i=no;i>=1;i--)
    {
        if((i%2)!=0)
        {
            fact=fact*i;
            printf("\t %d",i);
           
        }
    }
    return fact;
}

int main()
{
    int value=0;
    int ret=0;

    printf("Enter a number : ");
    scanf("%d",&value);

    ret=OddFact(value);
   
     printf("\n-------------------------------------");
    printf("\n ODD FACTORIAL of %d is : %d",value,ret);
     printf("\n-------------------------------------");

    return 0;
}