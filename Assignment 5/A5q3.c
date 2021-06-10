//Accept a number from user & display its non-factors

#include<stdio.h>

int NonFact(int no)
{
    int i=0;
    
    for(i=1;i<no;i++)
    {
        if((no%i)!=0)
         {
             printf("\t Non-factors is :  %d",i);
         }
    }
}

int main()
{
    int value=0;
    printf("Enter a number: ");
    scanf("%d",&value);

    NonFact(value);
    return 0;
}