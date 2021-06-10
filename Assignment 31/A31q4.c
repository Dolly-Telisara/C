/* Write a program which accept string from user and copy that characters of that string into another string by converting
   all capital caharacters into small case.      */

   #include<stdio.h>
   #include<string.h>

    void StrCopySmall(char arr[],char brr[])
    {
        int i=0;
        int j=0;

        while(arr[i]!='\0')
        {
            brr[j]=arr[i];

            if(arr[i]>='A' && arr[i]<='Z')
            {
                brr[j]=arr[i]+32;
            }

            i++;
            j++;
        }

        brr[j]='\0';
    }

   int main()
   {
       char str1[30];
       char str2[30];

       printf("Enter a string : ");
       scanf("%[^'\n']s",str1);

       StrCopySmall(str1,str2);
       
       printf("Modified string by converting all capital characters into small case : %s ",str2);

       return 0;
   }