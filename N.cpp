#include <stdio.h>

void print_board(int board[8][8]){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      printf("%d", board[i][j]);
    }
    printf("\n");
  }
}

void all_possible_moves(int i, int j, int board[8][8]){
  
  if(i >= 2){
    if(j >= 1){
      board[i - 2][j - 1] = 1;
    }

    if(j <= 6){
      board[i - 2][j + 1] = 1;
    }
  }

  if(i <= 5){
    if(j >= 1){
      board[i + 2][j - 1] = 1;
    }

    if(j <= 6){
      board[i + 2][j + 1] = 1;
    }
  }

  if(j >= 2){
    if(i >= 1){
      board[i - 1][j - 2] = 1;
    }

    if(i <= 6){
      board[i + 1][j - 2] = 1;
    }
  }

  if(j <= 5){
    if(i >= 1){
      board[i - 1][j + 2] = 1;
    }

    if(i <= 6){
      board[i + 1][j + 2] = 1;
    }
  }
}

int recurse(int depth, int white_pos[8][8], int black_pos[8][8]){
 
  if(depth < 0){
    return 0;
  }

  int new_white_pos[8][8] = {0};
  int new_black_pos[8][8] = {0};

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(white_pos[i][j] == 1 && black_pos[i][j] == 1){
        return 1;
      }

      if(white_pos[i][j] == 1 && depth > 0){
        white_pos[i][j] = 0;
        new_white_pos[i][j] = 1;
        all_possible_moves(i, j, new_white_pos);
      }

      if(black_pos[i][j] == 1 && depth > 0){
        black_pos[i][j] = 0;
        new_black_pos[i][j] = 1;
        all_possible_moves(i, j, new_black_pos);
      }
    }
  }

  return recurse(depth - 1, new_white_pos, new_black_pos);
}

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 1; i <= t; i++){
    int n;
    scanf("%d", &n); getchar();

    char charx1, charx2;
    int y1, y2;
    scanf("%c%d %c%d", &charx1, &y1, &charx2, &y2);

    int x1 = charx1 - 'A';
    int x2 = charx2 - 'A';
    y1 -= 1;
    y2 -= 1;

    int white_horse_positions[8][8] = {0};
    white_horse_positions[y1][x1] = 1;

    int black_horse_positions[8][8] = {0};
    black_horse_positions[y2][x2] = 1;

    int will_meet = recurse(n, white_horse_positions, black_horse_positions);
    
    if(will_meet){
      printf("Case #%d: YES\n", i);
    }
	else{
      printf("Case #%d: NO\n", i);
    }
  }
  
  return 0;
}
