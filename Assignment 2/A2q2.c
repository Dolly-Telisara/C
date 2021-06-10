//Accept one from user and print that number of * without  counter variable

#include<stdio.h>
int main()
{
    int value=0;
    printf("enter a number: ");
    scanf("%d",&value);

    while(value>0)
    {
        printf("\t *");
        value--;
    }
}