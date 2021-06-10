//Write a program to find the factorial

#include<stdio.h>


int Factorial(int no)
{
    if(no<0)
    {
        no = -no;
    }
    int i=0;
    int fact=1;
    for(i=no;i>=1;i--)
    {
       // printf("\t %d",i);
        fact=fact*i;
    }
    printf("\t FACTORIAL of %d is : %d",no,fact);
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    Factorial(value);
    return 0;
}