#include <stdio.h>

int aot(int x, int y){
	if(x == 0){
		return y + 1; 
	}
	else if(x > 0 && y == 0){
		return aot(x - 1, 1);
	}
	else if(x > 0 && y > 0){
		int result = aot(x - 1, aot(x, y - 1));
		return result;
	}
}

int main(){
	
	int m, n;
	
	scanf("%d %d", &m, &n);
	getchar();
	
	int result = aot(m, n);
	
	printf("result: %d\n", result);
	
	return 0;
}
