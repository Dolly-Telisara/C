//Accept a range from user & display all numbers  in between that range in REVERSE ORDER.

#include<stdio.h>

void DisplayReverseRange(int l, int u)
{
    if(l>u)
    {
        printf("INVALID RANGE!!!");
    }
    
    
    else
    {
         printf("\n The numbers in between the range %d to %d in REVERSE ORDER are :",l,u);
        int i=0;
        for(i=u;i>=l;i--)
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
    
    DisplayReverseRange(ll,ul);
    
    return 0;
}