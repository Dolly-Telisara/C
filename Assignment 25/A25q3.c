//Accept character from user & check whether it is a Digit  or not.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkDigit(int no)
{
    if( no>=48 && no<=57)     // character : 0 -9 = Decimal : 48 -57
    {
        return 1;
    }   
    else 
    return 0;
}
int main()
{
    char no='\0';
    BOOL ret=FALSE;

    printf("Enter a character : ");
    scanf("%c",&no);                        ////////////////////////////

    ret=ChkDigit(no);

    if(ret==1)
    {
        printf("TRUE  It is a DIGIT ");
    }
    else if(ret==0)
    {
        printf("FALSE  It is NOT a Digit");
    }
     return 0;
}