//Accept N numbers from user &display all such elements which are multiples of 11.
/*   INPUT : 6   
            ELEMENTS : 85   66  3   55  93  88
      OUTPUT :  66  55  88         */

#include<stdio.h>
#include<stdlib.h>

int display(int a[],int l)
{
    int i=0;

    printf("\nElements multiple of 11 are : ");

    for(i=0;i<l;i++)
    {
        if((a[i]%11)==0)
        {
            printf("\t%d",a[i]);
        }
    }
}
int main()
{
    int length=0,cnt=0;

    int *p=NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&length);

    p=(int*)malloc(length*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory!!");
        return -1;
    }

    for(cnt=0;cnt<length;cnt++)
    {
        printf("Enter  %d  element : ",cnt);
        scanf("%d",&p[cnt]);
    }

    display(p,length);

    return 0;
}