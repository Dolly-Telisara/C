//Accept a number from user & display its table

#include<stdio.h>

int DisplayTable(int no)
{
    if(no<0)
    {
        no = -no;
    }
    int i=0;
    int res=0;
    for(i=1;i<=10;i++)
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

    DisplayTable(value);
    return 0;
}