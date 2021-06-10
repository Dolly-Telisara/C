//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 4    Col = 4
   OUTPUT :  1  2   3   4
             5  6   7   8
             9  1   2   3
             4  5   6   7    */
 

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    int k=1;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(k<=9)
            {
             printf("\t%d",k);
             k++;
            }
            else 
            {
                k=1;
                printf("\t%d",k+1);
            }
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