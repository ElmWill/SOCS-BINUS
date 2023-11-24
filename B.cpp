#include <stdio.h>

int main(){
	
	
	int n, matrix[255][255];
	
	scanf("%d", &n); getchar();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &matrix[i][j]);
		}
		getchar();
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j == n - 1){
				printf("%d\n", matrix[j][i]);
			}
			else{
				printf("%d ", matrix[j][i]);
			}
		}
		
	}
	
	return 0;
}
