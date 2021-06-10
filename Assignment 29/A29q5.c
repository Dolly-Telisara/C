// Write a program which accept string from user & Reverse that string in place.

#include<stdio.h>
#include<string.h>

void StringReverse(char *arr)
{
    int i=0;
    int length=0;
    
    while(arr[length]!='\0')
    {
        length++;
    }

    for(i=length;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
}

int main()
{
    char str[30];

    printf("Enter a string : ");
    gets(str);

    StringReverse(str);
    //printf("Modified string is : %s",str);
    return 0;
}