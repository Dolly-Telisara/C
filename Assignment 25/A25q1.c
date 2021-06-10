//Accept character from user & check whether it is alphabet or not.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckAlphabet(char ch)
{
    if(ch>=97 && ch<123 || ch>=65 && ch<91)
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

    ret=CheckAlphabet(ch);

    if(ret==1)
    {
        printf("TRUE  It is a character ");
    }
    else if(ret==0)
    {
        printf("FALSE  It is NOT a character ");
    }
     return 0;
}