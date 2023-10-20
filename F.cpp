#include <stdio.h>
#include <string.h>

int countDistinct(char arr[], int n) {
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
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        char string[100001];
        scanf("%s", string);
        int len = strlen(string);
        char arr[100001];

        for (int j = 0; j < len; j++) {
            arr[j] = string[j];
        }
        
        int c = countDistinct(arr, len);

        if (c % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
    }

    return 0;
}

