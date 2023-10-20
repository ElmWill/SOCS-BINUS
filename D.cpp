#include <stdio.h>

int main(){
	
	int t;
	long long int m, f;
	
	scanf("%d",&t);getchar();
	
	for(long long int i = 1; i <= t; i++){
		printf("Case #%lld: ",i);
		scanf("%lld %lld", &m, &f); getchar();
		
		if(m % 2 == 0 || f % 2 == 0){
			puts("Party time!");
		}
		else{
			puts("Need more frogs");
		}
	}
	
	return 0;
}
