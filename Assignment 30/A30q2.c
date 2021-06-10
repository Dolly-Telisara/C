/* Write a program which accept string from user and copy the contents of that string into another string.
   (Implement strncpy() function).   
   
   Note : If the third parameter is greater than the size of source string than copy whole string into desination string  */


#include<stdio.h>
#include<string.h>

void StrNCpy(char *arr,char *brr,int cnt)
{
    while((*arr!='\0') && (cnt!=0))
    {
        *brr=*arr;

        *arr++;
        *brr++;    
        cnt--;
    }
    *brr='\0';
}

int main()
{
    char str1[30];
    char str2[30];
    int count=0;

    printf("Enter a string1 :");
    //gets(str1);
    scanf("\n%[^'\n']s",str1);

   // printf("\n%s",str1);
    printf("\nLength of string upto which it should be copied : ");
    scanf("\n%d",&count);

    StrNCpy(str1,str2,count);
    printf("\nString 1  copied in String 2 upto the length %d   : %s",count,str2);

    return 0;
}