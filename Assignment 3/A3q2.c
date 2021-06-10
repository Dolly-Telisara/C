//Accept one number from user & print even factors of that number

#include<stdio.h>

void displayFactors(int no)
{
    int i=0;

    if(no<=0)
    {
        no = -no;
    }
    for(i=1;i<=no;i++)
   {
      if(((no%i)==0) && ((i%2)==0))
       {
       printf("\t %d",i);
       } 
   } 
}

int main()
{
    int value=0;
    printf("enter the number: ");
    scanf("%d",&value);

    displayFactors(value);
    return 0;
}   
