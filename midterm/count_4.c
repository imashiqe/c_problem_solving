#include <stdio.h>
#include <string.h>

int main() {
    char A[10001];
    scanf("%s", A);

    int count[26] = {0};

    
    for (int i = 0; i < strlen(A); i++) {
        if (A[i] >= 'a' && A[i] <= 'z') {
            count[A[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}