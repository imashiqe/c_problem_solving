#include<stdio.h>

int main()

//Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    //minimum
    if (a<=b && a<=c)
    {
        printf("%d ",a);

    }
    else if(b<=a && b<=c)
    {
        printf("%d ",b);
    }
    else
    {
        printf("%d ",c);
    }
    // maximum
    if(a>=b && a>=c)
    {
        printf("%d ",a);

    }
    else if(b>=a && b>=c)
    {
        printf("%d ",b);
    }
    else{
        printf("%d ",c);
    }
    return 0;
}