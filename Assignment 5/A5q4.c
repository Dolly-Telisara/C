//Accept a number from user & return summation of its non-factors

#include<stdio.h>

int SumNonFact(int no)
{
    int i=0;
    int sum=0;
    for(i=1;i<no;i++)
    {
        if((no%i)!=0)
         {
            printf("\t %d",i);
            sum=sum+i;
         }
    }
    return sum;
}

int main()
{
    int value=0;
    int ret=0;
    printf("Enter a number: ");
    scanf("%d",&value);

    ret=SumNonFact(value);
    printf("\n Sum of non-factors is : %d",ret);
    return 0;
}