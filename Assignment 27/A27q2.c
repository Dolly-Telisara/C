//Write a program which accept string from user & count number of small characters.

#include<stdio.h>
#include<string.h>

int CountSmall(char *s)
{

    int i=0;
    int cnt=0;



    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int ret=0;
    char str[20];

    printf("Enter a string : ");
    //scanf("%s",str);

    gets(str);

    ret=CountSmall(str);
    printf("Total number Small letters are : %d",ret);
    return 0;
}