// Write a program  which accept string from user and copy the characters of that string into another string in reverse order.

#include<stdio.h>
#include<string.h>

void CharReverse(char arr[],char brr[])
{
    int i=0;

    while(arr[i]!='\0')
    {
        i++;
    }
    
     i--;
    
     int j=0;

     while(i>=0) 
    {
        brr[j]=arr[i];
        j++;
        i--;
     }
    brr[j]='\0';  
}

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter a string 1 : ");
    scanf("%[^'\n']s",str1);

    CharReverse(str1,str2);
    
    printf("\nInputed String 1 is reversed as : %s",str2);

    return 0;
}