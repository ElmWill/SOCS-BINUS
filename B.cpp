#include <stdio.h>

int main(){
    int n, max = 0;
    int count = 0;
	int arr[1001];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
        }
    }

    printf("%d\n", max);

    return 0;
}
