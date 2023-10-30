#include<stdio.h>

void fun(char ar[])
{
    printf("%d",strlen(ar));
    char n[]="world";
    return n;

}

int main()
   
{
    char ar[20]="Hello";
    fun(ar);
    
      
    return 0;
}