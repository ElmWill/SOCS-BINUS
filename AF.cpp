#include <stdio.h>

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int z = 1; z <= t; z++) {
        int N;
        scanf("%d", &N);
        long long int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &A[i]);
        }

        int atLeast3 = 0;
        int lessThan3 = 0;

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int X = A[i] ^ A[j];
                int onBits = countBits(X);

                if (onBits >= 3) {
                    atLeast3++;
                } else {
                    lessThan3++;
                }
            }
        }

        printf("Case #%d: %d %d\n", z, atLeast3, lessThan3);
    }

    return 0;
}
