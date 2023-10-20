#include <stdio.h>

int main(){
	
	int t, n;
	long long int next, first = 0, second = 1;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		next = 0;
		first = 0;
		second = 1;
		for(int j = 0; j < n; j++){
			if(j <= 1){
				next = j;
			}
			else{
				next = first + second;
				first = second;
				second = next;
			}
		}
		printf("Case #%d: %lld\n", i, next);
	}
	
	return 0;
}
