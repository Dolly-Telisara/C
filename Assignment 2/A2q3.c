//Accept one number from user and if number is less than 10 print "hello" otherwise print "demo"

#include<stdio.h>
 int Display(int no)
{
    if(no<10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
    }
    
}

int main()
{
    int value=0;
    printf("enter a number: ");
    scanf("%d",&value);

    Display(value);
    return 0;
}
