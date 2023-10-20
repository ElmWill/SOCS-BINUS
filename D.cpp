#include <stdio.h>

int main() {
	int x, y, array[101][101], t;
	
	scanf("%d %d", &x, &y);
	getchar();
	
	for(int i = 1; i <= x; i++) { 
		for(int j = 1; j <= y; j++) {
			scanf("%d", &array[i][j]);
		}
		getchar();
	}
	
	scanf("%d", &t);
	getchar();
	
	for(int i = 1; i <= t; i++) {
		int a, b, c;
		
		scanf("%d %d %d", &a, &b, &c);
		getchar();
		
		array[a][b] = c;
	}
	
	for(int i = 1; i <= x; i++) {
		for(int j = 1; j <= y; j++) {
			if(j == y) {
				printf("%d", array[i][j]);
			} else {
				printf("%d ", array[i][j]);
			}
		}
		puts("");
	}
	
	return 0;
}

