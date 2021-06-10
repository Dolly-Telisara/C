//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>
#include<string.h>

int CountDiff(char *s)
{
    int i=0;
    int Scnt=0;
    int Ccnt=0;
    int diff=0;

    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            Scnt++;
        }

        else if(s[i]>='A' && s[i]<='Z')
        {
            Ccnt++;
        }
    }
    printf("\nTotal number of small characters is : %d",Scnt);
    printf("\nTotal number of capital characters is : %d",Ccnt);
    diff=Scnt-Ccnt;
    return diff;
}

int main()
{
    int ret=0;
    char str[20];

    printf("Enter a string : ");
    //scanf("%s",str);

    gets(str);

    ret=CountDiff(str);
    printf("\nDifference between Small letters & Capital letter is : %d",ret);
    return 0;
}