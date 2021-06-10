// Write a program which accept a string from user and copy the characters of that string into another string by toggling the case.

#include<stdio.h>
#include<string.h>

void StrCopyToggle(char arr[],char brr[])
{
    int i=0;
    int j=0;

    while(arr[i]!='\0')
    {
       
        if(arr[i]>='A' && arr[i]<='Z') 
        {
           brr[j]=arr[i]+32;
        }
        
        else if(arr[i]>='a' && arr[i]<='z')
        {
            brr[j]=arr[i]-32;
        }
        
        else
        {
            brr[j]=arr[i];
        }
        
        i++;
        j++;
    }

    brr[j]='\0';
}

 int main()
   {
       char str1[30];
       char str2[30];

       printf("Enter a string : ");
       scanf("%[^'\n']s",str1);

       StrCopyToggle(str1,str2);
       
       printf("Modified string by Toggling the case  : %s ",str2);

       return 0;
   }