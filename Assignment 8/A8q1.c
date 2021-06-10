//Accept a number from user and if number < 50 then print small & if 50<no<100 then print medium & if no>100 printf large

#include<stdio.h>

int CheckNum(int no)
{
    if(no<50)
    {
        printf("Small");
    }
    else if(no>50 && no<100)
    {
        printf("Medium");
    }
    else if(no>100)
    {
        printf("Large");
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    CheckNum(value);
    return 0;
}
