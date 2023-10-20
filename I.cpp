#include <stdio.h>

int main(){
	
	int t;
	long long int awal, max, diskon;
	long long int dawal, dmax;
	
	scanf("%d",&t);getchar();
	
	
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld %lld", &awal , &diskon, &max);getchar();
		
		
		
		if(awal*diskon/100 <= max ){
			printf("Case #%d: %lld\n", i, awal*diskon/100);
		}
		else{
			printf("Case #%d: %lld\n", i, max);
		}
	}
	
	return 0;
}
