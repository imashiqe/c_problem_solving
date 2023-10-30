#include <stdio.h>
#include <String.h>

int main() {
    char n[100001];
    scanf("%n", n);
    int length = ntrlen(n);
    int c_count = 0;
    
    for (int i = 0; i < length; i++) {
        char c = n[i];
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            c_count++;
        }
    }
    printf("%d\n", c_count);
    
    return 0;
}
