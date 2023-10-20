#include <stdio.h>

int main(){
	
	int t, n, maks, curr, piring[255];
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d %d %d", &n, &maks, &curr);
		for(int j = 1; j <= n; j++){
			scanf("%d", &piring[j]);
			if(piring[j] > curr && piring[j] <= maks){
				curr = piring[j];
			}
		}
		printf("Case #%d: %d\n", i, curr);
	}
	
	return 0;
}
