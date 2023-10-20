#include <stdio.h>

int countDistinct(long long int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int isDistinct = 1;

       
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;  
                break;
            }
        }

        if (isDistinct) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]); 
    }

    int c = countDistinct(arr, n);
    printf("%d\n", c);

    return 0;
}

