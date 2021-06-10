// Write a program that accept one number from user and ON its first 4 bits . Return modifed number.

//  INPUT  :73     OUTPUT : 79   

#include<stdio.h>

typedef unsigned int UINT;

void ONConsecutiveBits(UINT n)
{
   UINT j=0;
   UINT new;

    while(j<4)
    {   
        new = (n | (1<<j));
        j++;    
    }
   printf("\nThe modified number is : %lu",new); 
}

int main()
{
    unsigned int num=0;
    unsigned int bit=0;

    printf("Enter the number : ");
    scanf("%lu",&num);

    ONConsecutiveBits(num);

    return 0;
}