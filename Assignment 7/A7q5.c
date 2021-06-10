//Accept a number from user and print first 5 multiples of that number

#include<stdio.h>

int FiveMultiples(int no)
{
    int i=0;
    int res=0;
    for(i=1;i<=5;i++)
    {
        res=no*i;
        printf("\t %d",res);
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    FiveMultiples(value);
    return 0;
}