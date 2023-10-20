#include <stdio.h>

int main(){
	
	long long int n, p, balon[100001], count;
	
	scanf("%lld %lld", &n, &p);
	count = 0;
	for(int i = 1; i <= n; i++){
		scanf("%lld", &balon[i]);
		if(balon[i] < p){
			count++;
		}
		else{
			continue;
		}
	}
	printf("%lld\n", count);
	
	
	return 0;
}
