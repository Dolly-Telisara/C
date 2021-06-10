//Write a program which accept string from user and accept one character.Check whether that character is present in string or not.

#include<stdio.h>
#include<string.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCharacter(char *arr,char ch)
{
    int i=0;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
        {
            return 1;
        }
    }
       
}    
    


int main()
{
    char str[20];
    char c;
    BOOL ret=FALSE;
    printf("Enter a string : ");
    gets(str);

    printf("Enter a character : ");
    scanf("\n %c",&c);

    ret=CheckCharacter(str,c);

    if(ret==1)
    {
        printf("TRUE !!   Character ' %c ' is present in the string  ' %s ' " ,c,str);
    }
    else if(ret==0)
    {
        printf("\nFALSE !!  Character ' %c ' is NOT present in  string  ' %s ' " ,c,str);
    }
    return 0;
}