//Accept number of rows & columns from user and display given pattern
/* INPUT :  Row = 3      Col = 4
    OUTPUT: A   A   A   A
            B   B   B   B
            C   C   C   C    */

#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    char ch='\0';

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t %c",(i+65));
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
