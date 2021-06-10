//Accept N numbers from user & return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int SmallestElement(int a[],int l)
{

    int i=0;
    int min=a[0];

    for(i=0;i<l;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
   
    return min;
}

int main()
{
    int length=0,cnt=0;
    int ret=0;

    int *p=NULL;

    printf("Enter number of elements : ");
    scanf("%d",&length);

    p=(int*)malloc(length*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory!!");
        return -1;
    }

    for(cnt=0;cnt<length;cnt++)
    {
        printf("Enter %d element : ",cnt);
        scanf("%d",&p[cnt]);
    }

    ret=SmallestElement(p,length);

    printf("\nThe Smallest Element is : %d",ret);

    free(p);

    return 0;
}