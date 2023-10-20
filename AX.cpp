#include <stdio.h>

int main(){
	
	long long int n, s[10001], profit;
	
	scanf("%lld", &n);
	profit = 0;
	for(int i = 0; i < n; i++){
		scanf("%lld", &s[i]);
		if(s[i] >= 0){
			profit += s[i];
		}
		else{
			continue;
		}
	}
	printf("%lld\n", profit);
	
	return 0;
}
