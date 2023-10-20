#include <stdio.h>

int main(){
	
	int n, ind[1000], arr[1000];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &ind[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[ind[i]]);
	}
	for(int i = 0; i < n; i++){
		if(i < n-1){
			printf("%d ", arr[i]);
		}
		else{
			printf("%d\n", arr[i]);
		}
	}
	
	return 0;
}
