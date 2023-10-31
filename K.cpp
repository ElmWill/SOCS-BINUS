#include <stdio.h>


int Fibo(int num, int a, int b){
	
	if(num == 0){
		return a;
	}
	else if(num == 1){
		return b;
	}
	return Fibo(num - 1, a, b) + Fibo(num - 2, a, b);
}

int main(){
	
	int n, x, y;
	
	scanf("%d %d", &x, &y); getchar();
	scanf("%d", &n);
	int result = Fibo(n, x, y);
	printf("%d\n", result);
	
	return 0;
}
