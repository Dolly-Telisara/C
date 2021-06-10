/* Accept a character from user .If it is capital then display all the characters from the input characters till "Z".
   If input is small letter then print all the charcters in reverse order till "a".
   In other cases return directly.  */

   #include<stdio.h>

   void Display(char c)
   {
       if(c>=65 && c<=90)
       {
           while(c<=90)
           {
               printf("\t%c",c);
               c++;
            }
       }

       if(c>=97 && c<=122)
       {
           while(c>=97)
           {
               printf("\t %c",c);
               c--;
           }
       }
   }
   int main()
   {
       int ch='\0';

       printf("Enter a charcter :");
       scanf("%c",&ch);

       Display(ch);
       return 0;
   }