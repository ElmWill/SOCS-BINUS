#include <stdio.h>

int main(){
	
	int n, m, q, x, y, a;
	int arr[255][255] = {0};
	
	scanf("%d %d %d", &n, &m, &q); getchar();
	
	
	for(int i = 0; i < q; i++){
		scanf("%d %d %d", &x, &y, &a);
		getchar();
		arr[x][y] = a;
	}
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(j == m - 1){
				printf("%d\n", arr[i][j]);
			}
			else{
				printf("%d ", arr[i][j]);
			}
		}
	}
	return 0;
}
