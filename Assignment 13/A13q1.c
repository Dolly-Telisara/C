//Accept a number from user & return the count of even digits.

#include<stdio.h>

int CountEvenDigit(int no)
{
    int res=0;
    int cnt=0;

    if(no<0)
    {
        no = -no;
    }
    while(no!=0)
    {
        res=no%10;

        if((res%2)==0)
        {
            cnt++;
        }
        no=no/10;
    }
    return cnt;
}

int main()
{
    int value=0;
    int ret=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    ret=CountEvenDigit(value);
    printf("Frequency of Even Digits in %d is : %d",value,ret);
    return 0;
}