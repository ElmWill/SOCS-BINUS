#include <stdio.h>

int main(){
	
	int n, t, views[255], a, b;
	
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &views[i]);
	}
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %d", &a, &b);
		int total = 0;
		for(int j = a; j <= b; j++){
			total += views[j];
		}
		printf("Case #%d: %d\n", i, total);
	}
	
	return 0;
}
