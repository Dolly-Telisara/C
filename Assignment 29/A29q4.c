// Write a program which accept string from user and accept one character.Return index of last occurence of that character.

#include<stdio.h>
#include<string.h>

int LastOccur(char *arr,char ch)
{
    int i=0;
    int length=0;
   
    while(arr[length]!='\0')
    {
        length++;
    }
    
    for(i=length;i>=0;i--)
    {
        if(arr[i]==ch)
        {
             return i;
        }    
    }
     return -1;
}    
    


int main()
{
    char str[20];
    char c;
    int ret=0;
    printf("\nEnter a string : ");
    gets(str);

    printf("\nEnter a character : ");
    scanf("\n %c",&c);

    ret=LastOccur(str,c);

    printf("\n Index of LAST Occurence of character ' %c ' is  : %d " ,c,ret);
    return 0;
}