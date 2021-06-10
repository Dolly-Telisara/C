//Accept a number from user & display multiplication of its factor

#include<stdio.h>

int MultiFactors(int no)
{
    int i=0;
    int res=1;
    for(i=1;i<no;i++)
    {
        if((no%i)==0)
        {
           // printf("\t %d",i);
            res=res*i;
        }
    }
    return res;        
}

int main()
{
    int value=0;
    int ret=0;
    
    printf("Enter a number: ");
    scanf("%d",&value);

    ret = MultiFactors(value);
    printf("\t Multiplication of factors is : %d",ret);         

    return 0;
}