#include <stdio.h>

int main(){
	
	long long int a, b;
	b = 1;
	scanf("%lld", &a);getchar();
	
	for(int i = 0; i < a; i++){
		b *= 2;
	}
		
	printf("%lld\n",b-1);
	
	return 0;
}
