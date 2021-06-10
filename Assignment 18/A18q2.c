//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 4    Col = 4
  
   OUTPUT :  *   *   *   *
             *   *   *   #
             *   *   #   #
             *   #   #   #    */
 

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j<(c-i))
            {
                printf("\t*");
            }
            else
            {
                printf("\t#");
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