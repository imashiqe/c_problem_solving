#include <stdio.h>

int main() {

    int n,i,a,b;

    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
       
        for (a=1; a<=n - i; a++) {
            printf(" ");
        }

        for (b = i; b >= 1; b--) {
            printf("%d", b);
        }
        printf("\n");
    }

    return 0;
}
