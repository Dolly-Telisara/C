//Accept one number from user & print that number of stars (*)
#include<stdio.h>
void accept(int no)
{
    int cnt = 0;

    for(cnt=0; cnt<no; cnt++)
    {
        printf("\n *");
    }
}
int main()
{
    int value=0;
   // value =5;
   
   printf("Enter one number : ");
   scanf("\n %d" ,&value);
   
    accept(value);
    return 0;
}