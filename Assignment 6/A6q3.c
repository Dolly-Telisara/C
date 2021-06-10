//Accept two numbers and check whether numbers are equal or not

#include<stdio.h>

void CheckEqual(int x,int y)
{
    if(x==y)
    {
        printf("Numbers are equal");
    }
    else
    {
        printf("Numbers are NOT equal");
    }
    
}

int main()
{
    int a=0;
    int b=0;
    printf("Enter two numbers: ");
    scanf("\t %d  %d",&a,&b);

    CheckEqual(a,b);
    return 0;

}