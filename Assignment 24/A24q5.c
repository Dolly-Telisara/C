//Accept N numbers from user & display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

int SummationOfDigit(int a[],int l)
{
    int i=0;
    int sum=0;
    int r=0;

    printf("\t\nSummation of digit is : ");

    for(i=0;i<l;i++)
    {
       while(a[i]!=0)
       { 
           r=a[i]%10;
           sum=sum+r;
           a[i]=a[i]/10;
        }
       printf("\t %d",sum);
       sum=0;
    }
}

int main()
{
    int length=0,cnt=0;
    
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

    SummationOfDigit(p,length);

    free(p);

    return 0;
}