//Accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>
#include<conio.h>

float Percentage(int TM,int OM)
{
    float per=0.0;

    if(TM==0)
    {
        printf("Enter valid Total Marks!!!");
    }
    else
    {
        per=(OM*100)/TM;
         printf("Percentage is : %f",per);
    }
}

int main()
{
    int TotalMarks=0;
    int ObtainedMarks=0;
    float ret=0.0;
    printf("Enter Obtained Marks :");
    scanf("\t %d",& ObtainedMarks);
    printf("Enter Total Marks : ");
    scanf("\t %d",& TotalMarks);

    Percentage(TotalMarks, ObtainedMarks);
   
    return 0;
}