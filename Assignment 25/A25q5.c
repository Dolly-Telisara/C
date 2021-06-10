/* Accept division of student from user & depending on the division display exam timing.
There are 4 divisions in school as A,B,C,D .
Exam of division A at 7 AM , B at 8.30 AM , C at 9.20 AM  & D at 10.30 AM .
(Applicatin should be case insensitive).  */

//Accept character from user & check whether it is alphabet or not.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL DisplaySchedule(char div)
{
    if(div>=97 && div<=100 || div>=65 && div<=68)
    {
        if(div==97 || div==65)
        {
            printf("Exam timing of Division ' %c' at 7am",div);
        } 

        if(div==98 || div==66)
        {
            printf("Exam timing of Division  '%c' at 8:30 am",div);
        }

        if(div==99 || div==67)
        {
            printf("Exam timing of Division  '%c' at 9:20 am",div);
        }

        if(div==100 || div==68)
        {
            printf("Exam timing of Division  '%c' at 10:30 am",div);
        }
    }   
   
    else 
    return 0;
}
int main()
{
    char ch='\0';
    BOOL ret=FALSE;

    printf("Enter you Division : ");
    scanf("%c",&ch);

    ret=DisplaySchedule(ch);

    if(ret==1)
    {
        printf("TRUE  It is a character ");
    }
    else if(ret==0)
    {
        printf("Invalid Input!! ");
    }
     return 0;
}
