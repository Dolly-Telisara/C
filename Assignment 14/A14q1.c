//Accept a number from user & display that many aphabets.

#include<stdio.h>
void DisplayAlphabet(int no)
{
    int i=0;
    
    //for(i=97;i<(97+no);i++)    //Small alphabets
    
    for(i=65;i<(65+no);i++)      //capital alphabets
    {
        printf("\t%c",i);
    }
}

int main()
{
    int value=0;
    printf("Enter a number : ");
    scanf("%d",&value);

    DisplayAlphabet(value);
    return 0;
}