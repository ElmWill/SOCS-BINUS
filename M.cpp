#include <stdio.h>

int main(){
	
	int t, n;
	long long int makanan[1001], duit, total;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %lld", &n, &duit);
		total = 0;
		for(int j = 1; j <= n; j++){
			scanf("%lld", &makanan[j]);
			getchar();
			total += makanan[j];
		}
		if(duit < total){
			printf("Case #%d: Wash dishes\n", i);
		}
		else{
			printf("Case #%d: No worries\n", i);
		}
	}
	
	return 0;
}
