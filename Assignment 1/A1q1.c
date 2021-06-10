#include<stdio.h>
int Divide(int no1,int no2)
{
    int ans = 0;
    if(no2>no1)
    {
        return -1;
    }
    ans=no1/no2;
    return ans;
}
int main()
{
    int x=15,y=5;
    int ret=0;
    ret=Divide(x,y);
    printf("Divison is : %d",ret);
    return 0;
}