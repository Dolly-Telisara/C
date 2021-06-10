//Accept name from user & print that name

#include<stdio.h>
#include<string.h>
 
 int main()
 {
     char name[20];
     printf("Enter full name:");
     
     //scanf("\t %s",name);    //&name[0] //This only prints the first string without any whitespaces 
     
     scanf("\n%[^'\n']s",name);
      
     // gets(name);
      
     

     printf("\nYour name is : %s",name);
    
     return 0;
 }