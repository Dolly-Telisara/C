//Accept N numbers from user & accept  Range, Display all elements from that range. 
/*   INPUT : N : 6
             Num :60 - 90
            ELEMENTS : 85   66  3  76  93  88   
    OUTPUT : 85  66  76   88
    
    INPUT : N: 6
            Num: 30 - 50   
            ELEMENTS : 85   66  3   76   93   88   
    OUTPUT :                          */

#include<stdio.h>
#include<stdlib.h>


int Range(int a[],int l,int s,int e)
{
    int i=0;

    for(i=0;i<l;i++)
    {
        if(a[i]>s && a[i]<e)
        {
            printf("\t%d",a[i]);
        }
    }    
}

int main()
{
    int length=0,cnt=0,no=0;
    int st=0,end=0;

    int *p=NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&length);

    p=(int*)malloc(length*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory!!");
        return -1;
    }

    for(cnt=0;cnt<length;cnt++)
    {
        printf("\nEnter %d  element : ",cnt);
        scanf("%d",&p[cnt]);
    }

     printf("\nEnter Range : ");
     printf("\nEnter Start : ");
    scanf("%d",&st);
     printf("\nEnter End : ");
    scanf("%d",&end);

     Range(p,length,st,end);
    
    free(p);
    return 0;
}