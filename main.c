#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("Hello world!\n");
   char name[20];
   printf("enter the first string\n");
   gets(name);
   char name1[20];
   printf("enter the 2nd string\n");
   gets(name1);
   int i,flag = 0;
   for(i=0;(name[i]!='\0'||name1[i]!='\0');i++)
   {
       if(name[i]!=name1[i])
       {
         flag = 1;
           break;
       }
   }
   if (flag == 0)
   {
       printf("same");
   }
   else
   {
       printf("not same");
   }
    return 0;
}
