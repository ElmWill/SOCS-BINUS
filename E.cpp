#include <stdio.h>


int main(){
	int t, y;
	long long int x;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld %d", &x, &y);
		printf("%d\n", (x>>y) & 1);
	}
	
	return 0;
}
