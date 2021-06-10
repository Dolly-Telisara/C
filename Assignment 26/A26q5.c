//Accept a character from user and display its ASCII value in decimal,octal and hexadeciaml format.

#include<stdio.h>

void Display(char c)
{
    if(c>=65 && c<=90 || c>=97 && c<=122)
    {
        printf("\n Decimal : %d ",c);
        printf("\n Octal :  %o ",c);
        printf("\n Hexadecimal :  %x ",c);
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