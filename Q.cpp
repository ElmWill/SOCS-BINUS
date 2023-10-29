#include <stdio.h>

int main(){
	int t;
	int arr[250][250];
	
	int n, m, q;
	int temp;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int lampu[250] = {0};
		
		scanf("%d %d %d", &n, &m, &q);
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				scanf("%d", &arr[j][k]);
			}
			getchar();
		}
		for(int j = 0; j < q ; j++){
			scanf("%d", &temp);
			temp -= 1;
			for(int k = 0; k < m; k++){
				lampu[k] += arr[temp][k];
				if(lampu[k] > 1){
					lampu[k] = 0;
				}
			}
		}
		printf("Case #%d:\n", i);
		for(int j = 0; j < m; j++){
			if(lampu[j] == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	
	return 0;
}



