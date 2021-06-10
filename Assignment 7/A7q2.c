//Accept number from user & print numbers till that number

#include<stdio.h>

int PrintNum(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("\t %d",i);
    }
}

int main()
{
    int value=0;
    printf("Enter a number :");
    scanf("\t %d",&value);

    PrintNum(value);
    return 0;
}
