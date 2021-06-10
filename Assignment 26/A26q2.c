/* Accept a character from user.If character is small display its corressponding capital charcter and 
if it is capital then display its corresspomding small.In other words display as it is.*/

#include<stdio.h>

void Display(char c)
{
    if(c>=65 && c<=90)  
    {
        printf("%c",c+32);         //Capital letter to small letter
    }

    else if(c>=97 && c<=122)
    {
        c=c-32;
        printf("%c",c);
    }
    else
    {
        printf("%c",c);
    }
    
}

int main()
{
    char ch='\0';

    printf("Enter a character : ");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}
