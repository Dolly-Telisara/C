//Accept a range from user & display Addition of  all Even numbers  in between that range(Rnge should contain positive number only).

#include<stdio.h>

int AddEvenRange(int l, int u)
{
    int i=0;
    int res=0;

    for(i=l;i<=u;i++)
     {   
        if((i%2)==0)
         {
            res=res+i;
         }
     } 
    return res;
}

int main()
{
    int ll=0;
    int ul=0;
    int add=0;
    printf("Enter range (Start & End point) of POSITIVE numbers : ");
    scanf("\t %d %d",&ll ,&ul);    
   
    if(ll<0 || ll>ul)
    {
        printf("\t INVALID RANGE!!");
        return 0;
    }  
    
    add=AddEvenRange(ll,ul);
    printf("\t Addition of all EVEN numbers in between the range %d to %d is : %d",ll,ul,add);     
     
    return 0;
}
