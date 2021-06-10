/* Write a program which accept string from user and copy the Small characters of that string into another string.  */


#include<stdio.h>
#include<string.h>

void StrCpySmall(char *arr,char *brr)
{
    while(*arr!='\0')
    {
         if((*arr>='a') && (*arr<='z'))
         {
            *brr=*arr;
            *brr++;
         }
         *arr++;
    }
    *brr='\0';
   //return ;
}

int main()
{
    char str1[30];
    char str2[30];


    printf("Enter a string1 :");
    //gets(str1);
    scanf("\n%[^'\n']s",str1);

    StrCpySmall(str1,str2);
    printf("\n Small characters of String 1  copied in String 2  : %s",str2);

    return 0;
}