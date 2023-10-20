#include <stdio.h>

int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n-j; k++){
				printf(" ");
			}
			for(int k = 1; k <= j; k++){	
				printf("*");		
			}
			puts("");
		}
	}
	
	
	return 0;
}
