#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int a[N], b[N], c[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        qsort(b, N, sizeof(int), compare);

        for (int i = 0; i < N; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < N; i++) {
            printf("%d", c[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
