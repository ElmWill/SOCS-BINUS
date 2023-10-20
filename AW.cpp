#include <stdio.h>

int main(){
	
	int t, n, arr[1001], count, temp;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		count = 0;
		temp = 0;
		
		scanf("%d", &n);
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
			
			if(arr[j] > arr[temp]){
				temp = j;
			}
		}
		for(int j = 0; j < n; j++){
			if(arr[temp] == arr[j]){
				count++;
			}	
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
