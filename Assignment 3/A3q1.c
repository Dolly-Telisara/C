//Accept one number from user & print that number of even numbers

#include<stdio.h>

void printEven(int freq)
{
    int i=0;
    int res=0;
    for(i=1;i<=freq;i++)
    {
        res=2*i;
        printf("\t %d",res);
    }
}

int main()
{
    int value=0;
    printf("enter the number: ");
    scanf("%d",&value);
    
    printEven(value);
    return 0;
}
