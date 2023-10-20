#include <stdio.h>

int main(){
	
	long long int d,s,t;
	
	scanf("%lld %lld %lld",&d, &s, &t);
	
	if(d > s){
		
		if(d > t){
			
			if(s > t){
				puts("Daging");
				puts("Sayur");
				puts("Telur");
			}
			
			else{
				puts("Daging");
				puts("Telur");
				puts("Sayur");
			}
			
		}
		
		else{
			puts("Telur");
			puts("Daging");
			puts("Sayur");
		}
	}
	else{
		
		if(d > t){
			puts("Sayur");
			puts("Daging");
			puts("Telur");
		}
		else{
			if(s > t){
				puts("Sayur");
				puts("Telur");
				puts("Daging");
			}
			else{
				puts("Telur");
				puts("Sayur");
				puts("Daging");
			}
		}
	}
	
	
	return 0;
}
