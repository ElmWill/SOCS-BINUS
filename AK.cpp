#include <stdio.h>

int main(){
	
	int t, arr[1001];
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int j = 1; j <= t; j++){
		if(j == t){
			printf("%d\n", arr[j - 1]);
		}
		else if(arr[j] <= arr[j-1]){
				printf("%d ", arr[j-1]);
		}
		else{
			continue;
		}
	}
	

		return 0;
}
