//Accept  number of rows & number of columns from user and display given pattern.
/* INPUT :  Row = 4    Col = 4
   OUTPUT :  2  4   6   8  
             1  3   5   7   
             2  4   6   8   
             1  3   5   7       */
 

#include<stdio.h>

int DisplayPattern(int r,int c)
{
    int i=0;
    int j=0;
   
    for(i=1;i<=r;i++)
    {
        if((i%2)!=0)
        { 
            for(j=1;j<=c;j++)
            {
                printf("\t%d",2*j); 
            }
        }
           else 
           {
               for(j=1;j<=c;j++)
                {     
                   printf("\t%d",2*j-1);
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