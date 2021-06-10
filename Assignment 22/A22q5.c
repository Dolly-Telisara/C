//Accept N numbers from user & accept one another number from user as "num" &  return frequency of "num" from it.
/*   INPUT : N : 6
             Num :66
            ELEMENTS : 85   66  3  66  93  88   
    OUTPUT : 2
    
    INPUT : N: 6
            Num: 12   
            ELEMENTS : 85   11  3   15  11  111   
    OUTPUT : 0                           */

#include<stdio.h>
#include<stdlib.h>

int CountOccurence(int a[],int l,int no)
{
    int i=0;
    int cnt=0;
    
    for(i=0;i<l;i++)
    {
        if(a[i]==no)
        {
            cnt++;
        }
    }
    return cnt;
}   

int main()
{
    int length=0,cnt=0,num=0;
    int  ret=0;
   
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

    printf("\nEnter a number whose occurence has to be checked in the above array : ");
    scanf("%d",&num);

    ret=CountOccurence(p,length,num);

    printf("Frequency of  %d  is  : %d ",num,ret);
    
    free(p);
    return 0;
}      