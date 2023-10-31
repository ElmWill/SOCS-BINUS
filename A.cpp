#include <stdio.h>

int count = 0;

int function(int x){
	if(x == 0){
		return 1;
	}
	if(x == 1){
		return 2;
	}
	if(x % 3 == 0){
		count++;
	}
	if(x % 5 == 0){
		return (x * 2);
	}
	return function(x - 1) + x + function(x - 2) + x - 2;
}


int main(){
	
	int t, n;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &n); getchar();
		count = 0;
		int result = function(n);
		printf("Case #%d: %d %d\n", i, result, count);
	}
	
	
	return 0;
}
