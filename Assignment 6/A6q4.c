//Accept three numbers from user & print its multiplication

#include<stdio.h>

int Mult(int a,int b,int c)
{
    int res=0;
     if(a>0 && b>0 && c>0)
    {
        res=a*b*c;
        return res;
        //printf("%d",res);
    }
    else if(a>0 && b==0 && c>0)
    {
        res=a*c;
        //printf("%d",res);
        return res;
    }
    else if(a>0 && b==0 && c==0)
    {
        res=a;
        //printf("%d",res);
        return res;
    }
    else if(a==0 && b==0 && c==0)
    {
        res=a*b*c;
        //printf("%d",res);
        return res;
    }
}

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int ret=0;
    printf("Enter Three Numbers: ");
    scanf("\t %d %d %d",&x,&y,&z);

    ret=Mult(x,y,z);
    printf("\t Multiplication is : %d",ret);
    return 0;
}
