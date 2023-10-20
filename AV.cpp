#include <stdio.h>

int main(){
	long long int n, hitung;
	
	scanf("%lld", &n);
	n += 1;
	hitung = n *(n + 1) / 2;
	printf("%lld\n", hitung);
}
