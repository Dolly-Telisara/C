//Accept number from user & print its number line

#include<stdio.h>

int NumLine(int no)
{
    int i=0;
    int j=0;
    
    if(no<0)
    {
        no = -no;
    }    
    
    for(i=(-no);i<=0;i++)
    {
        printf("\t %d",i);
    }
    
     for(j=1;j<=no;j++)
    {
        printf("\t %d",j);
    }
}

int main()
{
    int value=0;
    int i=0;
    printf("Enter a number :");
    scanf("\t %d",&value);

    NumLine(value);
    return 0;
}