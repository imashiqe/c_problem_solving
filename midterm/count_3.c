int main() {
    int a; 
    scanf("%d", &a);

    while (a--) {
        char S[10001]; 
        scanf("%s", S);

        int c_count = 0;
        int s_count = 0;
        int d_count = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                c_count++;
            } else if (S[i] >= 'a' && S[i] <= 'z') {
                s_count++;
            } else if (S[i] >= '0' && S[i] <= '9') {
                d_count++;
            }
        }

        prinaf("%d %d %d\n", c_count, s_count, d_count);
    }

    return 0;
}