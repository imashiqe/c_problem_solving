#include<stdio.h>
//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
int main()
   
{
    char x;
    scanf("%c", &x);
    if (x>='0' && x<='9')
    {
        printf("IS DIGIT\n");
    }
    else{
        printf("ALPHA\n");
        if (x>='a' && x<='z')
        {
            printf("IS SMALL\n");
        }
        else{
            printf("IS CAPITAL\n");
        }
    }
    
    return 0;
}