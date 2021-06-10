//Accept total bill amount & depending on the discount policy we have to return the amount after applying discount

#include<stdio.h>

float CalDiscount(int amount)
{
    float discount=0.0f;
    if(amount<500)
    {
        printf("Sorry!! No Discount");
    }
    else if(500<amount && amount<1500)
    {
        discount=amount-(amount*0.1);
        printf("Amount to pay after getting discount of 10 percent : %f",discount);
    }
    else if(amount>1500)
    {
        discount = amount-(amount*0.15);
        printf("Amount to pay after getting 15 percent discount : %f" ,discount);
    }
}

int main()
{
    int amt=0.0f;
    printf("Enter total amount of bill: ");
    scanf("%d",&amt);

    CalDiscount(amt);
    return 0;
}