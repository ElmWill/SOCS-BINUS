#include <stdio.h>

int main() {
    int n, count = 0;
    int arr[255][255];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

