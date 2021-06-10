//Accept N numbers from user & display all such numbers which contains three digit in it.



#include<stdio.h>
#include<stdlib.h>

int ThreeDigit(int a[],int l)
{
    int i=0;
    int cnt=0;
    int r=0;

    printf("\t\nThree Digit Numbers are  : ");

    for(i=0;i<l;i++)
    { 
       while(a[i]!=0)
       { 
           r=a[i]%10;
           cnt++;

           if(cnt==3)
            {
                printf("\t %d",a[i]);
                 a[i]=a[i]/10;
            }  
           
        }
  
        
    }
      return a[i];
}

int main()
{
    int length=0,cnt=0,i=0;
    int ret[i];

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

   ret[i]= ThreeDigit(p,length);
printf("%d",ret[i]);
    free(p);

    return 0;
}