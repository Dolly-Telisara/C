//Accept character from user & check whether it is Capital alphabet or not.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkCapitalAlph(char ch)
{
    if( ch>=65 && ch<=90)
    {
        return 1;
    }   
    else 
    return 0;
}
int main()
{
    char ch='\0';
    BOOL ret=FALSE;

    printf("Enter a character : ");
    scanf("%c",&ch);

    ret=ChkCapitalAlph(ch);

    if(ret==1)
    {
        printf("TRUE  It is a Capital Letter ");
    }
    else if(ret==0)
    {
        printf("FALSE  It is NOT a capital character ");
    }
     return 0;
}