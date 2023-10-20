#include <stdio.h> 

int main(){
	
	int t;
	long long int n, x, belakang;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		scanf("%lld %lld", &n, &x);
		
		if (n % 2) {
		belakang = n;	
		}
		else{
		belakang = n + 1;	
		} 
		
		if (x / 2 <= (belakang - x) / 2){
			printf("Case #%d: %lld\n", i, x / 2);	
		} 
			else{
			printf("Case #%d: %lld\n", i, (belakang - x) / 2);	
			} 
		}
	
	return 0;
}
