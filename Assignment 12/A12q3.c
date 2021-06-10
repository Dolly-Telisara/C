//Accept a number from user & count frequency of 2 in it.

#include<stdio.h>

int FreqOfTwo(int no)
{
    int cnt=0;
    int res=0;
    while(no!=0)
    {
        res=no%10;
        
        if(res==2)
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

    ret=FreqOfTwo(value);
    printf("\nFrequency of 2 in %d is : %d",value,ret);
    return 0;
}