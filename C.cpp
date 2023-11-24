#include <stdio.h>

int main(){
    int t, n, m, x, count = 0;

    scanf("%d", &t);
    getchar();

    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &m);
        getchar();
        int temp = n;
        int room[10001] = {0};

        for(int j = 1; j <= m; j++){
            scanf("%d", &x);
            temp = n;

            while(temp > 0){
                if(temp % x == 0){
                    if(room[temp] == 0){
                    	room[temp] = 1;
                    }
					else if(room[temp] == 1){
                        room[temp] = 0;
                    }
                }
                temp--;
            }
        }

        count = 0;
        printf("Case #%d:", i);
        for(int j = 1; j <= n; j++){
            if(room[j] == 1){
                count++;
            }

            if(count == n){
                printf(" No room left!");
                break;
            }
        }

        for(int j = 1; j <= n; j++){
            if(room[j] == 0){
                printf(" %d", j);
            }
        }
        puts("");
    }

    return 0;
}

