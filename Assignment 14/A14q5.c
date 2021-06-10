//Accept a number from user & display given pattern (INPUT: 8  OUTPUT: 2 4 6 8 10 12 14 16).

#include<stdio.h>

void DisplayPattern(int no)
{
    int i=0;
    int res=0;
    for(i=1;i<=no;i++)
    {
        res=2*i;
        printf("\t%d",res);
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    DisplayPattern(value);
    return 0;
}