#include <stdio.h>

int main(){
	
	int t, n;
	long long int arr[501][501], hasil[501];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n; k++){
				scanf("%lld", &arr[j][k]);
				hasil[j] = 0;
			}
		}
		
		for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n; k++){
				hasil[j] += arr[k][j];
			}
		}
		printf("Case #%d: ", i);
		for(int j = 1; j <= n; j++){
			if(j < n){
				printf("%lld ", hasil[j]);
			}
			else{
				printf("%lld\n", hasil[j]);
			}
		}
		
	}
	
	return 0;
}
