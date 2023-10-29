#include <stdio.h>

int main(){
	
	int t;
	long long int a, b, c, max, min, mid;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a >= b){
			if(a >= c){	
				if(b >= c){
					max = a;
					mid = b;
					min = c;
				}
				
				else{
					max = a;
					mid = c;
					min = b;
				}
			}
		
		else{
			max = c;
			mid = a;
			min = b;	
		}
	}
	else{
		if(a >= c){
			max = b;
			mid = a;
			min = c;
		}
		else{
			if(b >= c){
				max = b;
				mid = c;
				min = a;
			}
			else{
				max = c;
				mid = b;
				min = a;
			}
		}
	}
		
		long long int d = min + mid;
		if(d > max){
			puts("BISA");
		}
		else{
			puts("TIDAK BISA");
		}
	}
	
	
	return 0;
}
