#include<stdio.h>

int main()

{
    int sum=0;
    int i;
    for (i=1; i<= 5;  i=i+1)
    {
        sum+=i;
    }

    printf("%d",sum);
    
    return 0;
    
}