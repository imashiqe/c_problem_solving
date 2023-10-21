#include <stdio.h>
#include <string.h>

int main() {
    char str[100000]; 
    scanf("%s", str);
    
    int length = strlen(str); 
    
    printf("%d\n", length); 
    
    return 0;
}