#include <stdio.h>

int main(){
	
	int t, n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case #%d:\n", i);
		if(n % 2 == 0){
			for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n-j; k++){
				printf(" ");
			}
			for(int k = 1; k <= j; k++){
				if(k % 2 == 0){
				printf("*");	
				}
				else{
					printf("#");	
				}
				
			}
			puts("");
		}
		}
		else{
			for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n-j; k++){
				printf(" ");
			}
			for(int k = 1; k <= j; k++){
				if(k % 2 == 0){
				printf("#");	
				}
				else{
					printf("*");	
				}
				
			}
			puts("");
		}
		}
		
	}
	
	
	return 0;
}
