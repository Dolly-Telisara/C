//Accept number of km from user and return estimate rent

#include<stdio.h>

void DisplayRent(int dis)
{
    int rent=0;
    int r=0;
   if(dis<=100)
   {
       rent=dis*25;
       printf("Rent is %d",rent);
   } 
   else if(dis>100)
   {
       r=dis-100;
       rent=(100*25) + (r*15) ;   //Rent of 1st 100km will be 25rs/km then after the rent of remaining distance  will be 15rs/km
       printf("Rent is %d",rent);

   }
}

int main()
{
    int km=0;
    printf("Enter the kilometers : ");
    scanf("%d",&km);

    DisplayRent(km);
    return 0;
}