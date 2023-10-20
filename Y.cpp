#include <stdio.h>
#include <string.h>

void reverseSubstring(char* string, int start, int end) {
    while (start < end) {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int t, n, a, b;
    char string[1001];

    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d %s", &n, string);
        getchar();
        
        int len = strlen(string); 

        for (int j = 1; j <= n; j++) {
            scanf("%d %d", &a, &b);
            getchar();
            if (a >= 0 && a < len && b >= 0 && b < len && a < b) {
                reverseSubstring(string, a - 1, b - 1);
            }
        }
        printf("Case #%d: %s\n", i, string);
    }

    return 0;
}

