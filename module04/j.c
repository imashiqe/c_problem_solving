#include<stdio.h>
//Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
int main()
   
{
    int A,B;
    scanf("%d %d", &A,&B);
    if (A%B==0)
    {
       printf("Multiples\n");
    }else if(B%A==0)
    {
       printf("Multiples\n");
    }
    else{
        printf("No Multiples\n");
    }
    
    return 0;
}