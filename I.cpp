#include <stdio.h>

int main(){
	
	int t, n;
	long long int arr[1000];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		for(int j = 1; j <= n; j++){
			scanf("%lld", &arr[j]);
		}
		getchar();
		printf("Case #%d: ", i);
		for(int j = n ; j > 0; j--){
			if(j > 1){
				printf("%lld ", arr[j]);
			}
			else{
				printf("%lld\n", arr[j]);
			}
		}
	}
	
	return 0;
}
