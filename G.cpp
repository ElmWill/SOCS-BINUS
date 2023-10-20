#include <stdio.h>

int main(){
	
	long long int a, b, c, d, i, j;
	
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	i = a * b;
	j = c - d;
	
	if(i == j){
		puts("True");
	}
	else{
		puts("False");
	}
	
	return 0;
}
