#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int input[n];

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int j = 0; j < n; j++) {
            scanf("%d", &input[j]);
            
            if (input[j] > max1) {
                max2 = max1;
                max1 = input[j];
            } else if (input[j] > max2) {
                max2 = input[j];
            }
        }

        int max_sum = max1 + max2;

        printf("Case #%d: %d\n", i + 1, max_sum);
    }

    return 0;
}

