#include <stdio.h>

int main(){
	int n, a, b, c, d, t, trash;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		trash = 0;
		for(int j = 1; j <= n; j++){
			if(j % a == 0 || j % b == 0 || j % c == 0 || j % d == 0){
				trash++;
			}
		}
		printf("Case #%d: %d\n", i, trash);
	}
	
	return 0;
}
