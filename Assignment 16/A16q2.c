//Accept number of rows & columns from user and display given pattern
/* INPUT :  Row = 4      Col = 4
    OUTPUT: A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d    */

#include<stdio.h>

void DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    char ch='\0';

    for(i=1;i<=r;i++)
    {
        for(j=0;j<c;j++)
        {
            if((i%2)!=0)
            {
                printf("\t %c",(j+65));
            }
            
            else if((i%2)==0)
            {
                printf("\t %c ",(j+97));
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
