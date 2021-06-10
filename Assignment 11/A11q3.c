//Accept a range from user & display Addition of  all numbers  in between that range

#include<stdio.h>

int DisplayAddRange(int l, int u)
{
    int i=0;
    int res=0;

    
    for(i=l;i<=u;i++)
     {   
         res=res+i;
     }
    return res;
}

int main()
{
    int ll=0;
    int ul=0;
    int add=0;
    printf("Enter range (Start & End point) of numbers : ");
    scanf("\t %d %d",&ll ,&ul);    
   
   
    if(ll<0 || ll>ul)
    {
        printf("\t INVALID RANGE!!");
        return 0;    
    }  
    
    add=DisplayAddRange(ll,ul);
    printf("\t Addition of all numbers in between the range %d to %d is : %d",ll,ul,add);     
     
    return 0;
}
