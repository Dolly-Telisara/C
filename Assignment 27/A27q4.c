//Write a program which accept a string from user and check whether it contains vowels or not.

#include<stdio.h>
#include<string.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char *s)
{
    int i=0;
    

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E'||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        {
            return TRUE;
        }    
    }
    return FALSE;
}

int main()
{
    BOOL ret=FALSE;
    char str[20];

    printf("Enter a string : ");
    //scanf("%s",str);

    gets(str);

    ret=CheckVowel(str);

    if(ret==TRUE)
    {
         printf("\n Contains a Vowel ");
    }
    else if(ret==FALSE)
    {
        printf("\n Does NOT contain a Vowel ");
    }
   
    return 0;
}