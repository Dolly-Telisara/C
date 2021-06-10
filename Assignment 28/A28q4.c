// Accept a string from user and display only Digit from it.

#include<stdio.h>
#include<string.h>

void DisplayDigit(char *s)
{
    int i=0;
    int j=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            s[j]=s[i]; 
            j++;
         }
    }   
    s[j]='\0';

     printf("\tModified string is : %s",s);
}

int main()
{
    char str[30];

    printf("Enter a string : ");
    gets(str);

    DisplayDigit(str);
    
    return 0;
}

