#include <stdio.h>
#include <math.h>


int main(){
	
	int n, arr[255][255];
	long long int count;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	count = 0;
	for(int j = 0; j < n; j++){
		for(int k = j + 1; k < n; k++){
			if(arr[j][j] == arr[j][k] || arr[j][j] == arr[k][j]){
				count = 1;
				break;
			}
		}
		if(count == 1){
			break;
		}
	}
	if(count == 1){
			puts("Nay");
		}
		else{
			puts("Yay");
		}
	
	return 0;
}
