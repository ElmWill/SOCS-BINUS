#include <stdio.h>

int main(){
	
	int t, a1, s, h, i, a2, p;
	
	scanf("%d", &t);
	for(int j = 1; j <= t; j++){
		scanf("%d %d %d %d %d %d", &a1, &s, &h, &i, &a2, &p);
		printf("Case #%d: ", j);
		for(int k = 0; k < a1; k++){
			printf("a");
		}
		
		for(int k = 0; k < s; k++){
			printf("s");
		}
		
		for(int k = 0; k < h; k++){
			printf("h");
		}
		
		for(int k = 0; k < i; k++){
			printf("i");
		}
		
		for(int k = 0; k < a2; k++){
			printf("a");
		}
		
		for(int k = 1; k <= p; k++){
			if(k < p){
				printf("p");	
			}
			else{
				printf("p\n");
			}
			
		}
	}
	
	return 0;
}
