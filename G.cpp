#include <stdio.h>

int main(){
	
	long long int n, total;
	long long int binatang[255];
	
	scanf("%lld", &n);
	total = 0;
	for(long long int i = 1; i <= n; i++){
		scanf("%lld", &binatang[i]);
		
		total += binatang[i];
	}
	printf("%lld\n", total);
	
	return 0;
}
