#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        long long M; 
        int a,b,c; 

        scanf("%lld %d %d %d", &M, &a, &b, &c);

        long long sample = (long long)a*b*c;

        if (sample == 0 || M % sample != 0) {
           
            printf("-1\n");
        } else {
            long long missing = M / sample;
            printf("%lld\n", missing);
        }
    }

    return 0;
}
