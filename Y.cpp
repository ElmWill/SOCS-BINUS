#include <stdio.h>

int main(){
	
	int t, x, y;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %d", &x, &y);
		printf("Case #%d:\n", i);
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= y; k++){
				if(j == 1 || k == 1 || j == x || k == y){
					printf("#");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
