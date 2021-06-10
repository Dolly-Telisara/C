//Accept one character from user and convert its case        //   ASCII value of lower case alphabets is from 97 to 122
                                                            //  ASCII value of upper case alphabets is from  65 to 90            
#include<stdio.h>                                          //    difference between lower & upper case is  32

void ConvertCase(char value)
{
    if(value>='a' && value<='z')  //lower to upper
    {
        value = value - 32;    //subtracting 32 from the ASCII value of the character of lower case
        printf("%c",value);
    }
    else if(value>='A' && value<='Z')   //upper to lower
    {
        value = value + 32;            //adding 32 to the ASCII value of the character of uppercase
        printf("%c",value);
    } 
}

int main()
{
    char ch='\0';
    printf("enter a character: ");
    scanf("%c",&ch);

    ConvertCase(ch);
    return 0;
}
