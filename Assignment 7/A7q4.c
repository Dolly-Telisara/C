//Accept a number from user & print all the odd numbers upto that number

#include<stdio.h>

int PrintOdd(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        if((i%2)!=0)
        {
        printf("\t %d",i);
        }
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    PrintOdd(value);
    return 0;
}
