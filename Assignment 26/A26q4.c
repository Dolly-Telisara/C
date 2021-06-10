//Accept a charcter from user and check whether it is special symbol or not.(! @ # $ % ^ & * )

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0  

BOOL Display(char c)
{
    if(c>=33 && c<=47 || c==94)
    {
       return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int ch='\0';
    BOOL ret=FALSE;

    printf("Enter a character : ");
    scanf("%c",&ch);

    ret=Display(ch);

    if(ret==1)
    {
        printf("TRUE   %c  is a special symbol",ch);
    }
    else
    {
        printf("FALSE   %c  is NOT a special symbol",ch);
    } 
    
    return 0;
}