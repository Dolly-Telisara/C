//Accept a number from user & count frequency of 4 in it.

#include<stdio.h>

int FreqFour(int no)
{
    int res=0;
    int cnt=0;

    while(no!=0)
    {
        res=no%10;

        if(res==4)
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

    ret=FreqFour(value);
    printf("Frequency of 4 in %d is : %d",value,ret);

    return 0;
}