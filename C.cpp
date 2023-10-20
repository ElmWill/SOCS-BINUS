#include <stdio.h>

int main(){
	
	int n, t;
	long long int index, num, arr[255];
	
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld", &arr[i]);
	}
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld", &index, &num);
		arr[index] = num;
		printf("Case #%d: ", i);
		for(int j = 1; j <= n; j++){
			if(j < n){
				printf("%lld ", arr[j]);
			}
			else{
				printf("%lld\n", arr[j]);
			}
		}
	}
	
	return 0;
}
