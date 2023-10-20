#include <stdio.h>

int main(){
	
	int t, n;
	long long int need[255], have[255], so[255];
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%d", &n); getchar();
		for(int j = 1; j <= n; j++){
			scanf("%lld", &need[j]);
		}
		getchar();
		
		for(int j = 1; j <= n; j++){
			scanf("%lld", &have[j]);
		}
		getchar();
		
		for(int j = 1; j <= n; j++){
			so[j] = need[j] - have[j];
		}
		
		printf("Case #%d: ", i);
		for(int j = 1; j <= n; j++){
			if(j < n){
				printf("%lld ", so[j]);
			}
			else{
				printf("%lld\n", so[j]);
			}
		}
		
	}
	
	return 0;
}
