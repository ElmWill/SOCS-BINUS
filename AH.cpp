#include <stdio.h>

int main(){
	int t, count;
	long long int n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		count = 0;
		scanf("%lld", &n);
		while(n != 0){
			n /= 10;
			count++;
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
