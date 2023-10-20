#include <stdio.h>

int main(){
	
	int t;
	long long int n, test[10000], min[10000], count;
	
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		scanf("%lld", &n);
		getchar();
		for(int j = 0; j < n; j++){
			scanf("%lld", &test[j]);
		}
		getchar();
		for(int j = 0; j < n; j++){
			scanf("%lld", &min[j]);
		}
		getchar();
		count = 0;
		for(int j = 0; j < n; j++){
			if(test[j] < min[j]){
				count++;
			}
			else{
				continue;
			}
		}
		
		printf("Case #%d: %lld\n", i, count);
	}
	
	
	return 0;
}
