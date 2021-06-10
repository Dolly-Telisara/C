//Accept N numbers from user & return frequency of even numbers.
/*   INPUT : 6   
            ELEMENTS : 85   66  3   80  93  88
      OUTPUT : 3           */

#include<stdio.h>
#include<stdlib.h>

int Frequency(int a[],int l)
{
    int i=0;
    int cnt=0;
     
    for(i=0;i<l;i++)
    {
        if((a[i]%2)==0)
        {
            cnt++;
        }
    }
    return cnt;
}   

int main()
{
    int length=0,cnt=0,ret=0;

    int *p=NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&length);

    p=(int*)malloc(length*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to alloate memory");
        return -1;
    }

    for(cnt=0;cnt<length;cnt++)
    {
        printf("\nEnter  %d  element :  ",cnt);
        scanf("%d",&p[cnt]);
    }

    ret=Frequency(p,length);
    printf("\nFrequency of Even numbers is : %d ",ret);

    free(p);
    return 0;
}      