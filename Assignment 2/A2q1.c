//Accept one number from user and print that number of *

#include<stdio.h>

void display(int no)
{
    int cnt=0;
    while(cnt<no)
    {
        printf("\t *");
        cnt++;
    }
}

int main()
{
    int value=0;
    printf("enter a number: ");
    scanf("%d",&value);

    display(value);
    
    return 0;
}