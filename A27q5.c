//Write a program which accept string from user & display it in reverse order.

#include<stdio.h>
#include<string.h>

void Reverse(char *s1)
{
    char str2[20];
    int i=0;
    int length=0;
    
    while(s1[length]!='\0')
    {
        length++;
    }
   // printf("\n Length of INPUT String is : %d",length);
    
    
    printf("\nPrinting in Reverse order : ");
   
   /* for(i=length;i>=0;i--)
    {
        printf("%c",s1[i]);
    }
     i=0; */

   
     printf("\nStoring in reverse : ");
  
    while(length>=0)
    {
        str2[length]=s1[i];
    
        length--;
        i++;
    }

    s1[i]='\0';

   // printf("\nReversed String is : %s",str2);   
}

int main()
{
    
    char str1[20];
   
    printf("Enter a string : ");
    //scanf("%s",str1);
    scanf("[^'\n']s",str1);

   // gets(str1);

    Reverse(str1);
  // printf("\n Modified String is : %s",str1);
    return 0;
}