/* Write a program that accept a string from user and copy the characters of that string into another string by converting all small 
  characters into capital case.  */

#include<stdio.h>
#include<string.h>

void StrCopyCapital(char arr[],char brr[])
{
    int l=0;
    int i=0;
    int j=0;

    while(arr[l]!='\0')
    {
        l++;
    }

    while(arr[i]!='\0')
    {
        brr[j]=arr[i];
        
       if(arr[i]>='a' && arr[i]<='z')
        {
            brr[j]=arr[i]-32;
        }
        i++;
        j++;
    }
    arr[i]='\0';
    brr[j]='\0';
}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter a string : ");
    scanf("%[^'\n']s",str1);

    StrCopyCapital(str1,str2);
    printf("\n Modified string by converting all small characters into Capital : %s",str2);
    return 0;
}  