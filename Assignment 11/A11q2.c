//Accept a range from user & display all the even numbers in betwwen that range

#include<stdio.h>

void DisplayEvenRange(int l, int u)
{
    if(l>u)
    {
        printf("INVALID RANGE!!!");
    }

    else
    {
         printf("\n The EVEN numbers in between the range %d to %d  are :",l,u);
         
         int i=0;
    
        for(i=l;i<=u;i++)
        {
            if((i%2)==0)
            {
                printf("\t%d",i);
            }
        }
    }
}

int main()
{
    int ll=0;
    int ul=0;
    printf("Enter Lower Limit(Starting point) of numbers : ");
    scanf("\t %d",&ll );    
    printf("Enter Upper Limit(End point) of numbers : ");
    scanf("\t %d",&ul );    

     DisplayEvenRange(ll,ul);
     return 0;
}