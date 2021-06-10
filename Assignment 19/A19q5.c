//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 4    Col = 4
 
   OUTPUT :  1  2   3   4
                2   3   4
                    3   4
                        4            */

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    

    for(i=1;i<=r;i++)
    {
       for(j=1;j<i;j++)
        {
             printf("\t");
        }
             for(j=i;j<=c;j++)
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
    printf("Enter number of rows : ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&col);
    DisplayPattern(row,col);
    return 0;
}