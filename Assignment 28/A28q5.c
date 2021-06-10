// Accept a string from user and count number of whitespaces in it.

#include<stdio.h>
#include<string.h>

int CountSpaces(char *s)
{
    int i=0;
    int cnt=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==32)
        {
            cnt++;
         }
    }   
    return cnt;
     
}

int main()
{
    char str[30];
    int ret=0;

    printf("Enter a string : ");
    gets(str);

    ret=CountSpaces(str);
    
    printf("\tNumber of Whitespaces in a given  string is : %d",ret);
    return 0;
}

