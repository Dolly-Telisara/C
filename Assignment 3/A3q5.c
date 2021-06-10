//Accept one character from user & check whether it is vowel or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char chr) 
{
    if(chr=='a' ||chr=='e' ||chr=='i' ||chr =='o' ||chr =='u'||chr=='A' ||chr=='E' ||chr=='I' ||chr =='O' ||chr =='U' )
    {
        return TRUE;
    }
    else
    {
        {
            return FALSE;
        }
    }
    
}

int main()
{
    char ch='\0';
    int ret=0;
    printf("enter a character: ");
    scanf("%c",&ch);

    ret=ChkVowel(ch);

    if(ret==TRUE)
    {
        printf("TRUE",ch);
        //printf("%c is a Vowel",ch);
    }
    else if(ret==FALSE)
    {
        
        printf("FALSE",ch);
        //printf("%c is NOT a Vowel (It is a consonant)",ch);
    }
    return 0;
}
