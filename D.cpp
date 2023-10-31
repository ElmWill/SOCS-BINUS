#include <stdio.h>
int TillOne(long int x){
	if(x == 1){
		return 1;
	}
	else if(x % 2 == 0){
		int result = TillOne(x / 2);
		return result;
	}
	else{
		int result = TillOne(x - 1) +TillOne(x + 1);
		return result;
	}
}

int main(){
	
	int t;
	long int n;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%ld", &n);
		int result = TillOne(n);
		printf("Case #%d: %d\n", i, result);
	}
	
	
	return 0;
}
