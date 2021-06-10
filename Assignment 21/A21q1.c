//Accept N numbers from user & return difference between summation of even elements & summation of odd elements.
/* INPUT : N : 6
           Elements : 85    66      3       80      93      88
   OUTPUT : 53   (234 - 181)         */

#include<stdio.h>
#include<stdlib.h>

int Difference(int a[],int length)
{
    int i=0;
    int sum=0;
    int s=0;
    int diff=0;
    
    for(i=0;i<length;i++)
    {
    
        if((a[i]%2)==0)
        {
            sum=sum+a[i];
        }
        
        else
        {
            s=s+a[i];
        }
    }
    printf("\nSum of EVEN elements :  %d",sum);    
    printf("\nSum of ODD elements :  %d",s);
    diff=sum-s;
    return diff;
}

int main()
{
    int i=0,size=0,ret=0,cnt=0,length=0;
    int *p=NULL;

    printf("Enter number of elements : ");
    scanf("%d",&size);

    p=(int*)malloc(size*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
   /* printf("Enter %d element  :  ",length);
    scanf("%d",&length); */

    for(cnt=0;i<size;cnt++)
    {
        
        printf("Enter   %d   element :  ",i);
        scanf("%d",&p[cnt]);
        i=cnt+1;
    }

    ret=Difference(p,size);
    printf("\nDifference is : %d",ret);
    free(p);
    return 0;
}