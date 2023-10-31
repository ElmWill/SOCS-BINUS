#include <stdio.h>

//floodfill
char map[255][255];
int n, m;

int floodfill(int x, int y){
    if(x < 0 || y < 0 || x >= n || y >= m || map[x][y] == '#'){
        return 0;
    }

    if(map[x][y] == '*'){
    	map[x][y] = '.'; 
        return 1 + floodfill(x + 1, y) + floodfill(x, y + 1) + floodfill(x, y - 1) + floodfill(x - 1, y);
    }
    map[x][y] = '#';
    return floodfill(x + 1, y) + floodfill(x, y + 1) + floodfill(x, y - 1) + floodfill(x - 1, y);
}

int main() {
    int t, pos_x, pos_y;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &m);
        getchar();

        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                scanf("%c", &map[j][k]);
                if(map[j][k] == 'P'){
                    pos_x = j;
                    pos_y = k;
                }
            }
            getchar();
        }
        printf("Case #%d: %d\n", i, floodfill(pos_x, pos_y));
    }

    return 0;
}

