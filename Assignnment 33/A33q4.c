// Write a program that accept one number from user and Toggle 7th and 10th bit pf that number .Return modified number.

// Input : 137    Output : 713

#include<stdio.h>

typedef unsigned int UINT;

void ToggleBit(UINT n)
{
    UINT new = (n ^ ((1<<6) | (1<<9))) ;    // 1<<k is always 1 at k+1 position

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