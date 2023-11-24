#include <stdio.h>

int n, arr[255];

void function(int sum, int index){
	if(index > n){
		return;
	}
	
	sum += arr[index - 1];
	
	if(index * 2 > n){
		printf("%d\n", sum);
	}
	else{
		function(sum, index * 2);
		function(sum, index * 2 + 1);
	}
}

int main(){
	
	int t;
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:\n", i);
		function(0, 1);
	}
	
	
	return 0;
}
