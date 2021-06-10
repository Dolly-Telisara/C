//Accept N numbers from user & return frequency of 11 from it.
/*   INPUT : 6   
            ELEMENTS : 85   66  3   15  93  88   
    OUTPUT : 0
    
    INPUT : 6   
            ELEMENTS : 85   11  3   15  11  111   
    OUTPUT : 2                           */

#include<stdio.h>
#include<stdlib.h>

int CountOccurence(int a[],int l)
{
    int i=0;
    int cnt=0;
    
    for(i=0;i<l;i++)
    {
        if(a[i]==11)
        {
            cnt++;
        }
    }
    return cnt;
}   

int main()
{
    int length=0,cnt=0;
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

    ret=CountOccurence(p,length);

    printf("Frequency of 11 is  : %d ",ret);
    
    free(p);
    return 0;
}      