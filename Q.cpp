#include <stdio.h>

int count = -1;

void all_possible_moves(int i, int j, int board[8][8]){
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    for(int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if(x >= 0 && x < 8 && y >= 0 && y < 8){
            board[x][y] = 1;
        }
    }
}

int recurse(int white_pos[8][8], int black_pos[8][8]){
    count++;

    int new_white_pos[8][8] = {0};

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(white_pos[i][j] == 1 && black_pos[i][j] == 1){
                return 1;
            }

            if(white_pos[i][j] == 1){
                white_pos[i][j] = 0;
                all_possible_moves(i, j, new_white_pos);
            }
        }
    }

    return recurse(new_white_pos, black_pos);
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        char charx1, charx2;
        int y1, y2;
        count = -1;
        scanf(" %c%d %c%d", &charx1, &y1, &charx2, &y2);
        getchar();

        int x1 = charx1 - 'A';
        int x2 = charx2 - 'A';
        y1 -= 1;
        y2 -= 1;

        int white_horse_positions[8][8] = {0};
        white_horse_positions[y1][x1] = 1;

        int black_horse_positions[8][8] = {0};
        black_horse_positions[y2][x2] = 1;

        int will_meet = recurse(white_horse_positions, black_horse_positions);

        if(will_meet){
            printf("Case #%d: %d\n", i, count);
        }
    }

    return 0;
}

