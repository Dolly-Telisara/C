// Write a program that accept a string from user and copy the characters of that string into another string by removing all whitespaces.

#include<stdio.h>
#include<string.h>

void RemoveSpaces(char arr[],char brr[])
{
    int i=0;
    int j=0;
    int l=0;

    while(arr[l]!='\0')
    {
        l++;
    }
    
    while(arr[i]!='\0')
    {
        if(arr[i]!=' ')
        {
            brr[j++]=arr[i];
        }  

        i++;
     }  
    
    brr[j]='\0';
}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter a string 1 : ");
    scanf("%[^'\n']s",str1);

    RemoveSpaces(str1,str2);
    
    printf("\n After removing whitespaces from Inputed String 1 becomes : %s",str2);

    return 0;
}