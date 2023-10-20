#include <stdio.h>

int main(){
	
	long long int n;
	long long int total = 0;
	long long int dmg = 0;
	
	scanf("%lld", &n);
	fflush(stdin);
	for(long long int i = 1; i <= n; i++){
		dmg = (i-1)*50;
		total += (100 + dmg);
	}
	
	printf("%lld\n", total);
	
	return 0;
}
