//Accept a number from user & display its digit in reverse order

#include<stdio.h>

int DisplayRevNum(int no)
{
     int rev=0;
     if(no<0)
     {
         no = -no;
     }
     while(no!=0)
     {
         rev=no%10;        //Gives us the last digit of number (no) //rev=(rev*10)+(no%10);
         printf("%d",rev);
         no=no/10;                  //Removes the last digit of no
     }
     //return rev;
}

int main()
{
    int value=0;
   // int ret=0;
    printf("Enter a number : ");
    scanf("%d",& value);

    DisplayRevNum(value);
    //printf(" The given number in REVERSE ORDER is : %d",ret);
    return 0;
}