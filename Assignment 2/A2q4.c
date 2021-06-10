//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

int display(int value,int freq)
{
    int i=0;

    if(freq>=0)
    {
    for(i=0;i<freq;i++)
    {
        printf("\t %d",value);
    }
    }

    else
    {
         for(i=0;i>freq;i--)
    {
        printf("\t %d",value);
    }
    }
    
}

int main()
{
    int no1=0;
    int no2=0;
    printf("enter two nubers: ");
    scanf("\t %d %d",&no1,&no2);

    display(no1,no2);
    return 0;
}
