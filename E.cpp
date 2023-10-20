#include <stdio.h>

int main(){
	
	long long int a, b, c, d, e, f, g;
	
	scanf("%lld %lld", &a, &b);
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = a % b;
	
	printf("%lld\n",c);
	printf("%lld\n",d);
	printf("%lld\n",e);
	printf("%lld\n",f);
	printf("%lld\n",g);
	
	
	return 0;
}
