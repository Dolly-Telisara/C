//Write a program which accept string from user and count number of capital characters.

#include<stdio.h>
#include<string.h>

int CountCapital(char *s)
{
     int cnt=0;
     int i=0;

     for(i=0;s[i]!='\0';i++)
    {
    if(s[i]>'A' && s[i]<='Z')
    {
       cnt++;
    }
   
    }
     return cnt;
}

    

int main()
{
    int ret=0;
    char str[100];

     printf("Enter a string: ");
    // scanf("%s",str);
     gets(str);
     ret=CountCapital(str);
     printf("\nTotal capital letters are : %d",ret);
     return 0;
}