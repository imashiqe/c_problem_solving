#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // It's a palindrome
}

int main() {
    char S[1001];
    scanf("%s", S);

    int result = is_palindrome(S);

    if (result) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
