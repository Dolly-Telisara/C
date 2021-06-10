//Accept N numbers from user & return Difference between frequency of even numbers & odd numbers.
/*   INPUT : 8   
            ELEMENTS : 85   66  3   80  93  88   90  94
      OUTPUT :            */

#include<stdio.h>
#include<stdlib.h>

int DiffFreq(int a[],int l)
{
    int i=0;
    int Ecnt=0;
    int Ocnt=0;
    int diff=0;
     
    for(i=0;i<l;i++)
    {
        if((a[i]%2)==0)
        {
            Ecnt++;
        }
    
        else
        {
            Ocnt++;
        }
    }

    printf("\nFrequency of Even numbers : %d",Ecnt);
    printf("\nFrequency of Odd numbers : %d",Ocnt);

    diff=Ecnt-Ocnt;
    return diff;
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

    ret=DiffFreq(p,length);
    printf("\nFrequency of  Difference between frequency of even numbers & odd numbers :  %d ",ret);

    free(p);
    return 0;
}      