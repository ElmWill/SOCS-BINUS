#include <stdio.h>

int main(){
	
	int t, n, m;
	long long int berat[501][501], max, total;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %d", &n, &m);
		total = 0;
		max = 0;
		for(int j = 1; j <= n; j++){
			max = 0;
			for(int k = 1; k <= m; k++){
				scanf("%lld", &berat[j][k]);
				if(max <= berat[j][k]){
					max = berat[j][k];
				}
			}
			total += max;
		}
		printf("Case #%d: %lld\n", i, total);
	}
	
	return 0;
}
