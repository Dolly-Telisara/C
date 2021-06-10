//Accept number of rows & columns from user and display given pattern
/* INPUT :  Row = 4      Col = 5
    OUTPUT: 4   4   4   4   4
            3   3   3   3   3
            2   2   2   2   2
            1   1   1   1    1     */

#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;

    for(i=r;i>=1;i--)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t %d",i);
        }
        printf("\n");
    }
}

int main()
{
    int row=0;
    int col=0;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&col);

    DisplayPattern(row,col);
    return 0;
}
