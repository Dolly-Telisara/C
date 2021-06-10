// Write a program that accept one number from user and Toggle 7th bit of that number.

//Input : 137     Output : 201

#include<stdio.h>

typedef unsigned int UINT;

void ToggleBit(UINT n)
{
  /*  if((n>>6)&1)      // If the  7th bit is 1 make it 0
    {
        UINT new = (n & ~(1<<6));

        printf("\n Switching off the 7th bit : %lu",new);
    }
    else             //If the 7th bit is 0 the make it 1
    {
        UINT new = (n |(1<<6));

        printf("\nSwitching ON the 7th bit : %lu",new);
    }  */

    UINT new = (n ^ (1<<6));    // 1<<k is always 1 at k+1 position

    printf("\nAfter Toggling the result is : %lu",new);
    
}

int main()
{
    unsigned int num=0;
    unsigned int bit=0;

    printf("Enter the number : ");
    scanf("%lu",&num);

    ToggleBit(num);

    return 0;
}