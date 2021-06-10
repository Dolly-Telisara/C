//Accept a range from user & display all numbers  in between that range

#include<stdio.h>

void DisplayRange(int l, int u)
{
    if(l>u)
    {
        printf("INVALID RANGE!!!");
    }

    else
    {
         printf("\n The numbers in between the range %d to %d  are :",l,u);
        int i=0;
        for(i=l;i<=u;i++)
        {
            printf("\t%d",i);
        }
    }

}

int main()
{
    int ll=0;
    int ul=0;
    printf("Enter range of numbers : ");
    scanf("\t %d %d",&ll ,&ul);    

    DisplayRange(ll,ul);
    return 0;
}