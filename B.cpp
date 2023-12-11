#include <stdio.h>

int main(){
	
	int t, n, piece;
	piece = 0;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case %d: ", i);
		for(int j = 0; j < n; j++){
			piece = (j * j + j +2) / 2;
			if(j == n-1){
				printf("%d", piece);
			}
			else{
				printf("%d ", piece);
			}
		}
		puts("");
	}
	
	return 0;
}
