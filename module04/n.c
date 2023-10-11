#include<stdio.h>
//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
int main()
   
{
    char a;
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        int ans=a-32;
        printf("%c",ans);
    }
    else{
       int ans=a+32;
       printf("%c",ans);
    }
    

    return 0;
}