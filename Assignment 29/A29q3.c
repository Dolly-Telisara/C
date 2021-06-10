// Write a program which accept string from user and accept one character.Return index of first occurence of that character.

#include<stdio.h>
#include<string.h>

int FirstChar(char *arr,char ch)
{
    int i=0;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch)
        {
            return i;
        }    
    }

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

    ret=FirstChar(str,c);

    printf("\n Index of First Occurence of character ' %c ' is  : %d " ,c,ret);
    return 0;
}