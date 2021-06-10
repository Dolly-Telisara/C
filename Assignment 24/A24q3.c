//Accept N numbers from user & return Difference between the largest & smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int a[],int l)
{
    int i=0;
    int min=a[0];
    int max=a[0];
    int diff=0;
    for(i=0;i<l;i++)
    {
        if(a[i]<min )
        {
            min=a[i];
        }

        else if(a[i]>max)
        {
            max=a[i];
        }
    }
   printf("\nMIN : %d",min);
   printf("\nMAX : %d",max);

    diff=max-min;
    return diff;
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

    ret=Difference(p,length);
    
    printf("\nThe Difference is : %d",ret);
    
    free(p);
    return 0;
}