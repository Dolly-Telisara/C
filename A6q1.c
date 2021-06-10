//Accept name from user & print that name

#include<stdio.h>
 
 int main()
 {
     char name[50];
     printf("Enter full name:");
     //scanf("\t %s",&name);     //This only prints the first string without any whitespaces 
      //gets(name);
      
      scanf("%<^/n>",&name);

     printf("Your name is : %s",name);
    
     return 0;
 }