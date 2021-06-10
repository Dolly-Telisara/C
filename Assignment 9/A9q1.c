//Accept a number from user & print that number of * and # pattern

#include<stdio.h>

void DisplayPattern(int no)
{
    if(no<0)
    {
        no = -no;
    }
    int i=0;
    for(i=0;i<no;i++)
    {
        printf("\t *");
    }
     for(i=0;i<no;i++)
    {
        printf("\t #");
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    DisplayPattern(value);
    return 0;
}