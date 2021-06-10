//Accept number of rows & number of columns from user and display below pattern.
/* INPUT :  row: 2    col: 3
OUTPUT : 1 2 3
         1 2 3  */


#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
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
         