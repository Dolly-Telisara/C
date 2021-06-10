//Accept gross income from user & return tax amount

#include<stdio.h>
#include<conio.h>
float IncomeTax(int amount)
{
    float tax=0.0f;
    if(amount<500000)
    {
        printf("You are not applicable to pay Tax!!");
    }
    else if(amount>500000 && amount<1000000)
    {
       tax = amount*0.1;
        tax = (amount*(10/100)) + (amount-500000)*10/100;
        printf(" Amount of 10 percent Tax : %f",tax);
    }
    else if(amount>1000000 && amount<2000000)
    {
        
         tax = tax + (amount-1000000)*20/100;
         printf("AmounT OF 20 percent Tax : %f",tax);
    }
    else if(amount>200000)
    {
          tax =tax + (amount-2000000)*30/100;
         printf("Amount OF 30 percent Tax : %f",tax);
    }
}

int main()
{
    int amt=0;
    printf("Enter Gross Income : ");
    scanf("%d",&amt);

    IncomeTax(amt);
    return 0;
}