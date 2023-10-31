#include <stdio.h>

long n;
int ke;

void epic(){
	if(n == 1){
		if(ke == 0){
			puts("Lili");
		}
		else{
			puts("Jojo");
		}
	}
	else{
		if(ke == 0){
			ke = 1;
		}
		else{
			ke = 0;
		}
		
		if(n % 2 == 0){
			n /= 2;
		}
		else{
			n = n * 3 + 1;
		}
		epic();
	}
}

int main(){
	
	long t;
	
	scanf("%d", &t); getchar();
	for(int i = 1;  i <= t; i++){
		scanf("%ld", &n); getchar();
		ke = 0;
		printf("Case #%d: ", i);
		epic();
	}
	
	return 0;
}
