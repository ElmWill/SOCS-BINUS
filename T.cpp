#include <stdio.h>

int main(){
	
	long long int n, count;
	int c, s, v;
	
	scanf("%lld", &n);
	count = 0;
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &c, &s, &v);
		if(s > v){
			count++;
		}
		else{
			continue;
		}
	}
	printf("%d\n", count);
	
	return 0;
}
