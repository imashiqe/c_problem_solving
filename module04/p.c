#include<stdio.h>
//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
int main()
   
{
    int x;
    scanf("%d",&x);
    int digit=x/1000;
    if (digit%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    return 0;
}