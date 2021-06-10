//Accept a number from user & count frequency of such a digits which are less than 6.

#include<stdio.h>

int Count(int no)
{
    int res=0;
    int cnt=0;

    while(no!=0)
    {
        res=no%10;

        if(res<6)
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

    ret=Count(value);
    printf("Frequency of  digits Less than 6 in %d : %d",value,ret);
    return 0;
}
