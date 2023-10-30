#include <stdio.h>


void odd_even() {
    int N;
    scanf("%d", &N);

    int A[N];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d %d\n", evenCount, oddCount);
}

int main() {
    odd_even(); 
    return 0;
}
