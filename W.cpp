#include <stdio.h>

int main(){
	int t, n, num[255], found, count;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		
		
		for(int j = 1; j <= n; j++){
			scanf("%d", &num[j]);
		}
		count = 0;
		for(int j = 1; j <= n; j++){
			found = 0;
			for(int k = 1; k <= n; k++){
				for(int l = k + 1; l <= n; l++){
					if(num[j] == num[k] + num[l] && j != k && j != l){
						count++;
						found = 1;
						break;
					}
				}
				if(found == 1){
					break;
				}
			}
		}
		printf("Case #%d: %d\n", i, count);
	}
	
	return 0;
}
