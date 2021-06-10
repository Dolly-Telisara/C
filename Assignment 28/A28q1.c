//Write a program which accept string from user and convert it into lower case.

#include<stdio.h>
#include<string.h>

void ConvertLower(char *s)
{
    int i=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }   

  //   printf("\nModified string is : %c",s[i]);
}

int main()
{
    char str[30];

    printf("Enter a string : ");
    gets(str);

    ConvertLower(str);
     printf("\nModified string is : %s",str);

    return 0;
}
