//Accept a number from user & return the between the summation of all its factors & non-factors

#include<stdio.h>

int FactDiff(int no)
{
    int i=0;
    int s=0;
    int t=0;
    for(i=1;i<no;i++)
    {
        if((no%i)==0 )
        {
            s=s+i;
        }
        if((no%i)!=0)
        {
            t=t+i;
        }
    }
    return s-t;
}

int main()
{
    int value=0;
    int ret=0;
    printf("Enter a number : ");
    scanf("\t %d",&value);

    ret=FactDiff(value);
    printf("Difference of summation of all the factors & non-factors of given number is : %d",ret);
    return 0;

}