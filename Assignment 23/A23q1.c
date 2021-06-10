//Accept N numbers from user & accept one another  number as "num" ,Check whether "num" is present or not.
/*   INPUT : N : 6
             Num :66
            ELEMENTS : 85   66  3  66  93  88   
    OUTPUT : TRUE
    
    INPUT : N: 6
            Num: 12   
            ELEMENTS : 85   11  3   15  11  111   
    OUTPUT : FALSE                           */

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckPresenceNum(int a[],int l,int num)
{
    int i=0;

    for(i=0;i<l;i++)
    {
        if(a[i]==num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int length=0,cnt=0,no=0;
    BOOL ret=FALSE;

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

     printf("\nEnter number whose presence has to be checked in the array : ");
    scanf("%d",&no);

    ret=CheckPresenceNum(p,length,no);

    if(ret==1)
    {
        printf("\tTRUE");
    }
    else if(ret==0)
    {
        printf("\tFALSE");
    }
    free(p);
    return 0;
}