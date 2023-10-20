#include <stdio.h>
#include <string.h>

int main() {

    int t, n, len;
    char string[1001], huruf[1001], a, b;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%s", string);
        len = strlen(string);
        for(int j = 0; j < len; j++) {
            huruf[j] = string[j];
        }
        scanf("%d", &n);
        getchar();
        for(int j = 1; j <= n; j++){
            scanf(" %c %c", &a, &b);
            for(int k = 0; k < len; k++){
                if(huruf[k] == a){
                	huruf[k] = b;
                }
            }
        }
        printf("Case #%d: ", i);
        for(int i = 0; i < len; i++){
            if(i < len - 1){
                printf("%c", huruf[i]);
            }
            else{
                printf("%c\n", huruf[i]);
            }
        }
    }

    return 0;
}

