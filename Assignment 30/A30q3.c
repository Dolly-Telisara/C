/* Write a program which accept string from user and copy the Capital characters of that string into another string.  */


#include<stdio.h>
#include<string.h>

void StrCpyCap(char *arr,char *brr)
{
    while(*arr!='\0')
    {
         if((*arr>='A') && (*arr<='Z'))
         {
            *brr=*arr;
            *brr++;
         }
         *arr++;
    }
    *brr='\0';
}

int main()
{
    char str1[30];
    char str2[30];


    printf("Enter a string1 :");
    //gets(str1);
    scanf("\n%[^'\n']s",str1);

    StrCpyCap(str1,str2);
    printf("\n Capital characters of String 1  copied in String 2  : %s",str2);

    return 0;
}