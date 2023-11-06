#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int JMatrix = 1; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j || i == (N - 1 - j)) {
                if (matrix[i][j] != 1) {
                    JMatrix = 0; 
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    JMatrix = 0; 
                    break;
                }
            }
        }
        if (JMatrix == 0) {
            break;
        }
    }

    if (JMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
