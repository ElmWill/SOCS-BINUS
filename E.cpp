#include <stdio.h>

int main(){
	
	int t, n, arr[1001], total = 0;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		total = 0;
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
			total += arr[j];
		}
		printf("Case #%d: %d\n", i, total);
	}
	
	return 0;
}
