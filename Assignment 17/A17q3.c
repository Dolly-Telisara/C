//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 4    Col = 4
   OUTPUT : a   b   c   d 
            1   2   3   4
            a   b   c   d 
            1   2   3   4         */
 

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    char ch='\0';

    for(i=1;i<=r;i++)
    {
        if((i%2)!=0)
        {
            for(j=1;j<=c;j++)
            {
                printf("\t%c",(97+ch));
                ch++;
            }
          ch=0;  
        }
       
        else
        {
            for(j=1;j<=c;j++)
            {
                printf("\t%d",j);
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