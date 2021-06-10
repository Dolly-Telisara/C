//Accept a number from user and display its factor in decreasing order

#include<stdio.h>

int FactorsRev(int no)
{
    int i=0;

    for(i=no;i>=1;i--)
     {
        if(i!=no && ((no%i)==0))
         {
           printf("\t %d",i);
         }
     }
}

int main()
{
    int value=0;
    
    printf("Enter a number: ");
    scanf("%d",&value);
    
    printf("\t Factors in decreasing order are :"); 
    FactorsRev(value);
    return 0;
}