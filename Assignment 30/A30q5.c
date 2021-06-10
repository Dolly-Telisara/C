/* Write a program which accept two string from user and Concat the second string after the first string. */


#include<stdio.h>
#include<string.h>

void StrConcate(char *arr,char *brr)
{
    while(*arr!='\0')
    {
         *arr++;
    }
    
     while(*brr!='\0')
    {
        *arr=*brr;
        *brr++;
        *arr++;
   }
    *arr='\0';          
 }



int main()
{
    char str1[30];
    char str2[30];


    printf("Enter a string1 :");
    //gets(str1);
    scanf("\n%[^'\n']s",str1);

    printf("Enter a string2 :");
    //gets(str1);
    scanf("\n%[^'\n']s",str2);

    StrConcate(str1,str2);
    printf("\n Concatenate  String 1 &  String 2  : %s",str1);

    return 0;
}