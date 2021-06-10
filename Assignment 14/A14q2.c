//Accept a number from user & display pattern (Input : 3  Output : 3 # 2 # 1 #).

#include<stdio.h>

void DisplayPattern(int no)
{
    int i=0;
    for(i=no;i>=1;i--)
    {
        printf("\t%d",i);
        printf("\t#");
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