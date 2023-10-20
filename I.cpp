#include <stdio.h>

int main(){
	
	long long int num, sum, min;
	
	scanf("%lld",&num);
	
	sum = num + num;
	min = sum - 1;
	
	printf("%lld plus %lld is %lld\n", num, num, sum);
	printf("minus one is %lld\n", min);
	
	return 0;
}
