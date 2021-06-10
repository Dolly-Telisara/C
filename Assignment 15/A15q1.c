//Accept number of Rows & number of Columns from user & displaygiven pattern.

/* INPUT : Rows: 2   Columns: 3
   OUTPUT:  * * *
           * * *         */


#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t*");
        }
        printf("\n");
    }
}

int main()
{
    int row=0;
    int col=0;
    printf("Enter number of Rows : ");
    scanf("%d",&row);
    printf("Enter number of Columns : ");
    scanf("%d",&col);

    DisplayPattern(row,col);
    return 0;
}
           