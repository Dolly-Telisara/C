//Accept a number from user & display given pattern (INPUT: 3  OUTPUT: 1 * 2 * 3 *).

#include<stdio.h>

void DisplayPattern(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("\t%d",i);
        printf("\t*");
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