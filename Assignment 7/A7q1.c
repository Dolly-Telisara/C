//Accept number from user & print that number of $ and * on screen

#include<stdio.h>

void pattern(int no)
{
    
    int i=0;
    if(no<0)
    {
        no = -no;
    }
    for(i=0;i<no;i++)
    {
        printf("\t $");
        printf("\t *");
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("\t %d",&value);

    pattern(value);
    return 0;
}