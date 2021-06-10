/* Write a program that accept one number from user and position from user and check whether the bit at that position is ON or OFF.
   If bit is ON return TRUE otherwise return FALSE.   */

   #include<stdio.h>

   typedef unsigned int UINT;
   typedef int BOOL;
   #define TRUE 1
   #define FALSE 0
   
   BOOL CheckBit(UINT n,UINT p)
   {
         if(p<=0)    
          {
              printf("\nin IF");
             //return n; 
          }
    
        else
        {   
            if(n & (1<<(p-1)))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
          
    }

   int main()
   {
       unsigned int num=0;
       unsigned int pos=0;
    
        BOOL ret=0;
    
       printf("\nEnter a number : ");
       scanf("%lu",&num);

       printf("\nEnter the position at which you have to check that the bit is ON or OFF : ");
       scanf("%lu",&pos);

       ret=CheckBit(num,pos);

       if(ret==1)
       {
             printf("\n TRUE , The bit is ON at position  %lu .",pos);
       }
       else if(ret==0)
       {
            printf("\n FALSE , The bit is OFF at position  %lu .",pos);
       }
       else 
       {
           printf("\nINVALID POSTION !!");
       }
      
       return 0;
    }