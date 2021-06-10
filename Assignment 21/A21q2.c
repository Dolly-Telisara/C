//Accept N numbers from user & dispaly all such elements which are divisible by 5.
/*   INPUT : 6   
            ELEMENTS : 85   66  3   80  93  88
      OUTPUT : 85 80           */

#include<stdio.h>
#include<stdlib.h>

int Divisible(int a[],int l)
{
    int i=0;
     
     printf("\nElements Divisible by 5 are : ");
    
    for(i=0;i<l;i++)
    {
        if((a[i]%5)==0)
        {
            printf("\t %d",a[i]);
        }
    }
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


    Divisible(p,length);

    free(p);
    return 0;
}
