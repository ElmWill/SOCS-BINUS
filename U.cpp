#include <stdio.h>

int main(){
	
	int t, n, arr[1000], bibi, lili;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		for(int j = 1; j <= n; j++){
			scanf("%d", &arr[j]);
		}
		getchar();
		scanf("%d %d", &bibi, &lili);
		if(arr[bibi] > arr[lili]){
			printf("Case #%d : Bibi\n", i);
		}
		else if(arr[bibi] < arr[lili]){
			printf("Case #%d : Lili\n", i);
		}
		else if(arr[bibi] == arr[lili]){
			printf("Case #%d : Draw\n", i);
		}
	}
	
	return 0;
}
