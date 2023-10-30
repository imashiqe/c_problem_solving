#include <stdio.h>

int main() {
    int a; 
    scanf("%d", &a);

    while (a--) {
        int b;
        scanf("%d", &b);

        int A[10001]; 
        for (int i = 0; i < b; i++) {
            scanf("%d", &A[i]);
        }

        int X; 
        scanf("%d", &X);

       
        int found = 0;
        for (int i = 0; i < b; i++) {
            if (A[i] == X) {
                found = 1;
                break; 
            }
        }

       
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}