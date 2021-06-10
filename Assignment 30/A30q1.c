/* Write a program which accept string from user and copy the contents of that string into another string.
   (Implement strcpy() function).    */


#include<stdio.h>
#include<string.h>

void StrCpy(char *arr,char *brr)
{
    while(*arr!='\0')
    {
        *brr=*arr;

        *arr++;
        *brr++;    
    }
    *brr='\0';
}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter a string1 :");
    gets(str1);

    StrCpy(str1,str2);
    printf("\n String 1  copied in String 2 : %s",str2);

    return 0;
}