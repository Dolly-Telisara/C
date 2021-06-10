// Write a program which accept string from user and accept one character.Return frequency of that  character.

#include<stdio.h>
#include<string.h>

int CountChar(char *arr,char ch)
{
    int i=0;
    int cnt=0;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
        {
            cnt++;
        }    
    }
    return cnt;
}    
    


int main()
{
    char str[20];
    char c;
    int ret=0;
    printf("Enter a string : ");
    gets(str);

    printf("Enter a character : ");
    scanf("\n %c",&c);

    ret=CountChar(str,c);

    printf(" Frequency of character ' %c ' is  : %d " ,c,ret);
    return 0;
}