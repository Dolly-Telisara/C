//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 6   Col = 6
 
   OUTPUT :  *   *   *   *    *   *
             *                *   *    
             *           *        *   
             *       *            *     
             *   *                *
             *   *   *   *    *   *       */  

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
    

    for(i=1;i<=r;i++)
    {
       for(j=c;j>=1;j--)
        {
            if(i==1 || j==1  || j==c || i==r)
            {
                printf("\t*");
            }
          
           else if(i==j)
            {
                printf("\t*");
            }
           
           else 
            {
                printf("\t");
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