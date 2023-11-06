#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        char input[N];
        scanf("%s", input);
        int tiger = 0, pathan = 0;
        
        for (int i = 0; i < N; i++) {
            if (input[i] == 'T') {
                tiger++;
            } else if (input[i] == 'P') {
                pathan++;
            }
        }
        if (tiger > pathan) {
            printf("Tiger\n");
        } else if (tiger<pathan) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
