//Write a program to find even factorial of given number

#include<stdio.h>

int EvenFact(int no)
{
    int i=0;
    int fact=1;
    if(no<0)
    {
        no = -no;
    }

    printf("\n Even Factors of %d is : ",no);
           
    for(i=no;i>=1;i--)
    {
        if((i%2)==0)
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

    ret=EvenFact(value);
   
     printf("\n-------------------------------------");
    printf("\n EVEN FACTORIAL of %d is : %d",value,ret);
     printf("\n-------------------------------------");

    return 0;
}