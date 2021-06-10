//Accept number of row & number of column from user & display given pattern
/*  INPUT:  row: 3  col: 5  
OUTPUT: 5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1  */

 
#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    for(i=1;i<=r;i++)
    {
        for(j=c;j>=1;j--)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }
}

int main()
{
    int row=0;
    int col=0;
    printf("Enter number of row : ");
    scanf("%d",&row);
    printf("Enter number of column : ");
    scanf("%d",&col);

    DisplayPattern(row,col);
    return 0;
}
                