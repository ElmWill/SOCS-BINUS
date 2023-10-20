#include <stdio.h>

int main(){
	
	int t, n;
	long long int item[255], total;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		total = 0;
		scanf("%d", &n);
		for(int j = 1; j <= n; j++){
			scanf("%lld", &item[j]);
			total += item[j];
		}
		printf("Case #%d: %lld\n", i, total);
	}
	
	return 0;
}
