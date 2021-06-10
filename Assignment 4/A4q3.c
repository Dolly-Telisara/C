//Accept standard from user and display the corressponding fees

#include<stdio.h>

void DisplayFees(int standard)
{

        if(standard>4)
        {
            printf("Wrong input!!");
        }
    
    if(standard==1)
    {
        printf("\t Fees for 1st standard is : 8900");
    }
    if(standard==2)
    {
        printf("\t Fees for 2nd standard is : 12790");
    }
    if(standard==3)
    {
        printf("\t Fees for 3rd standard is : 21000");
    }
    if(standard==4)
    {
        printf("\t Fees for 4th standard is : 23450");
    }
    } 

int main()
{
    int std=0;
    printf("Enter standard : ");
    scanf("%d",&std);

    DisplayFees(std);
    return 0;
}