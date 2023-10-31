#include <stdio.h>

int count = 0;

int Fibo(int num, long a, long b){
	
	if(num == 0){
		return a;
	}
	else if(num == 1){
		return b;
	}
	return Fibo(num - 1, a, b) - Fibo(num - 2, a, b);
}

int main(){
	
	int t, n;
	long x, y;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %ld %ld", &n, &x, &y);
		long result = Fibo(n, x, y);
		
		printf("Case #%d: %ld\n", i, result);
	}
	
	
	return 0;
}
