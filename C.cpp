#include <stdio.h>

int main(){
	
	long long int n;
	long long int total = 0;
	long long int bonus = 0;
	
	scanf("%lld", &n);
	fflush(stdin);
	for(long long int i = 1; i <= n; i++){
		bonus = (i-1)*50;
		total += (100 + bonus);
	}
	
	printf("%lld\n", total);
	
	return 0;
}
