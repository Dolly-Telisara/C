//Write a program which displays ASCII table.Table contains symbol ,decimal , hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>

void Display()
{
     int a;
      
    for(a=0;a<=127;a++)    //255
    {
        if((a%24)==0)          //a%16
        {
            getch();
            system("clr");
        }
        printf("\n\t %d \t %x \t %o \t %c ",a,a,a,a);

    }
}
int main()
{
    Display();
    return 0;
}