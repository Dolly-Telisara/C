// Accept a string from user and convert it into upper case.

#include<stdio.h>
#include<string.h>

void ConvertUpper(char *s)
{
    int i=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }   

  //   printf("\nModified string is : %s",s);
}

int main()
{
    char str[30];

    printf("Enter a string : ");
    gets(str);

    ConvertUpper(str);
     printf("\nModified string is : %s",str);

    return 0;
}

