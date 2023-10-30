#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 2 * N - 1; i++) {
        for (int j = 1; j <= 2 * N - 1; j++) {
            int min = (i < j) ? i : j;
            min = (min < 2 * N - i) ? min : 2 * N - i;
            min = (min < 2 * N - j) ? min : 2 * N - j;

            if (i <= N) {
                if (j <= N) {
                    if (j < N)
                        printf(" ");
                    else
                        printf("#");
                } else {
                    if (j > 2 * N - N)
                        printf(" ");
                    else
                        printf("#");
                }
            } else {
                if (j <= N) {
                    if (j < N)
                        printf(" ");
                    else
                        printf("#");
                } else {
                    if (j > 2 * N - N)
                        printf(" ");
                    else
                        printf("#");
                }
            }

            if (j != 2 * N - 1)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}
