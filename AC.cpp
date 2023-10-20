#include <stdio.h>

int main(){
	
	int t;
	long long int n, m, arr, min, temp;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld", &n, &m);
		getchar();
		min = 10001;
		for(long long int j = 1; j <= n; j++){
			scanf("%lld", &arr);
			if(j != 1){
				if(arr < min){
					min = arr;
				}
			}
			else{
					min = arr;
				}
		}
		printf("Case #%d: %lld\n", i, m / min);
	}
	
	return 0;
}
