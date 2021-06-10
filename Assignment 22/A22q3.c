//Accept N numbers from user & CHECK whether that number contains 11 in it or not.
/*   INPUT : 6   
            ELEMENTS : 85   66  11   80  93  88   
    OUTPUT : 11 is present. 
    
    INPUT : 6   
            ELEMENTS : 85   66  13   80  93  88   
    OUTPUT : 11 is absent.                  */

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int a[],int l)
{
    int i=0;
    
    for(i=0;i<l;i++)
    {
        if(a[i]==11)
        {
            return TRUE;
        }
    }
    return FALSE;
}   

int main()
{
    int length=0,cnt=0;
    BOOL  ret=0;
   
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

    ret=Check(p,length);

    if(ret==TRUE)
    {
        printf("\n11 is Present");
    }

    else if(ret==FALSE)
    {
        printf("\n11 is Absent");
    }
    
    free(p);
    return 0;
}      