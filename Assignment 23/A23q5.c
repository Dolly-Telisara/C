//Accept N numbers from user & return product of all Odd elements.
/* INPUT : N : 6
           Elements : 15   66  3   70  10  88
    OUTPUT : 45

     INPUT : N : 6
           Elements : 44   66  72   70  10  88
    OUTPUT : 0                       */

  
#include<stdio.h>
#include<stdlib.h>


int OddProduct(int a[],int l)
{
    int i=0;
    int mult=1;

    for(i=0;i<l;i++)
    {
        if((a[i]%2)!=0)
        {
            mult=mult*a[i];
        }
    }
    
        return mult;
}

int main()
{
    int length=0,cnt=0,no=0;
    int ret=0;

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

    ret=OddProduct(p,length);
    printf("\n Product of Odd elements  : %d  ",ret);
    free(p);
    return 0;
}