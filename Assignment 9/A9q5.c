
//Write a program that returns diffrence between EVEN FACTORIAL &  ODD FACTORIAL

#include<stdio.h>

int FactorialDiff(int no)
{
    
    int i=0;
    int OddFact=1;
    int EvenFact=1;
    int diff=0;
   
    if(no<0)
    {
        no = -no;
    }

    for(i=no;i>=1;i--)
     {
        if((i%2)!=0 )
        {
            OddFact=OddFact*i;
            printf("\n ODD Factor :  %d",i);
         }

         else if((i%2)==0)
         {
             EvenFact=EvenFact*i;
            printf("\n Even Factor : %d",i);
         }
    }
     
    
    printf("\n ODD FACTORIAL of %d is : %d",no,OddFact);
     printf("\n EVEN FACTORIAL of %d is : %d",no,EvenFact);
    
     diff=EvenFact - OddFact;
     return diff;
}

int main()
{
    int value=0;
    int ret=0;

    printf("Enter a number : ");
    scanf("%d",&value);

    ret=FactorialDiff(value);
   
     printf("\n-------------------------------------------------------------------------");
    printf("\n Difference between EVEN FACTORIAL & ODD FACTORIAL of %d is : %d",value,ret);
     printf("\n-------------------------------------------------------------------------");

    return 0;
}
