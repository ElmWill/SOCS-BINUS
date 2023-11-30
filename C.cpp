#include <stdio.h>

int count = 0;

int Fibo(int num){
	count++;
	if(num == 0){
		return 1;
	}
	else if(num == 1){
		return 1;
	}
	return Fibo(num - 1) + Fibo(num - 2);
}

int main(){
	
	int t, n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		count = 0;
		Fibo(n);
		
		printf("Case #%d: %d\n", i, count);
	}
	
	
	return 0;
}
