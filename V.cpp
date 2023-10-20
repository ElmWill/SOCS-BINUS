#include <stdio.h>

int main(){
	
	int t, x, y, n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &x);
		
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				
				if(j == 1 || k == 1 || j == x || k == x || k == j || k == (x + 1 - j)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
