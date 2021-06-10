//Accept N numbers from user & accept one another  number as "no" & return index of First Occurence of that "no" 
/*   INPUT : N : 6
             Num :66
            ELEMENTS : 85   66  3  66  93  88   
    OUTPUT : 1
    
    INPUT : N: 6
            Num: 12   
            ELEMENTS : 85   11  3   15  11  111   
    OUTPUT : -1                          */

#include<stdio.h>
#include<stdlib.h>


int FirstOccurence(int a[],int l,int num)
{
    int i=0;

    for(i=0;i<l;i++)
    {
        if(a[i]==num)
        {
            return i;
        }
    }
    
        return -1;
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

     printf("\nEnter number whose First Occurence has to be checked in the array : ");
    scanf("%d",&no);

    ret=FirstOccurence(p,length,no);
    printf("\n The element %d  First Occured  at index  : %d  ",no,ret);

    free(p);
    return 0;
}