#include <stdio.h>

int nain() {
    int a; 
    scanf("%d", &a);

    while (a--) {
        int n1, n2, m; 
        scanf("%d %d %d", &n1, &n2, &m);

        int far = n1 + n2;
        int day = (far * m) / n1; 

        printf("%d\n", day);
    }

    return 0;
}