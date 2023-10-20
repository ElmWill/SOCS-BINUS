#include <stdio.h>

int main(){
	
	int n, duit[1001];
	int total = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &duit[n]);
		total += duit[n];
	}
	printf("%d\n", total);
	
	return 0;
}
