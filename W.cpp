#include <stdio.h>

int main(){
	
	int t, n, odd, even;
	int arr[1001];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		odd = 0;
		even = 0;
		
		for(int j = 1; j <= n; j++){
			scanf("%d", &arr[j]);
			if(arr[j] % 2 == 0){
				even++;
			}
			else{
				odd++;
			}
		}
		printf("Odd group : %d integer(s).\n", odd);
		printf("Even group : %d integer(s).\n\n", even);
	}
	
	return 0;
}
