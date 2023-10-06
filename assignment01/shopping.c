#include<stdio.h>

int main()

{ 
   int n;
   printf("Enter Amount : ");
   scanf("%d",&n);
   if (n>1000)
   {
      printf("I will buy Punjabi\n");

       if (n>=1500)
   {
      printf("I will buy new shoes\n");
   }
   if (n>=1500)
   {
      printf("Alisa will buy new shoes\n");
   }  
   }
   else{
      printf("Bad luck!");
   }
  
   

   return 0;
}