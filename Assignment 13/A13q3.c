///Accept a number from user & return the count of  digits in between 3 and 7.

#include<stdio.h>

int CountRange(int no)
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

        if(res>3 && res<7)
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

    ret=CountRange(value);
    printf("Frequency of  Digits in between the range 3 to 7 is : %d",ret);
    return 0;
}