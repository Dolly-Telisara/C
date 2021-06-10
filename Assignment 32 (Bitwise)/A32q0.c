// Converting Deciaml number to Binary number.

//Bits from 0 to 31.

#include<stdio.h>

typedef unsigned int UINT;

void DecToBin(UINT n)
{
    //To convert DECIMAL to BINARY number
    
    int var=0;              
    int r=0;
    UINT bin=0;
    int i=1;
    
    var=n;
    
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        bin=bin+(r*i);
        i=i*10;    
    }

    printf("\t Decimal number  %lu is equivalent to Binary number :  %lu ", var,bin);  
}  


int main()
{
    unsigned int no=0;
    
    printf("Enter a number : ");
    scanf("%lu",&no);
    
    DecToBin(no);
    return 0;
}
