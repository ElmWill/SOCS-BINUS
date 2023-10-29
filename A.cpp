#include <stdio.h>

int main(){
	
	int t, x, arr1[255][255], arr2[255][255], arr3[255][255], arr4[255][255];
	int arr5[255][255];
	
	scanf("%d", &t);
	getchar();
	
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &x);
		getchar();
		
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				scanf("%d", &arr1[j][k]);
			}
			getchar();
		}
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				scanf("%d", &arr2[j][k]);
			}
			getchar();
		}
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				scanf("%d", &arr3[j][k]);
			}
			getchar();
		}
		
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				arr4[j][k] = 0;
				for(int l = 1; l <= x; l++){
					arr4[j][k] += arr1[j][l] * arr2[l][k];
				}
			}
		}
		
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				arr5[j][k] = 0;
				for(int l = 1; l <= x; l++){
					arr5[j][k] += arr4[j][l] * arr3[l][k];
				}
			}
		}
		
		printf("Case #%d:\n",i);
		for(int j = 1; j <= x; j++){
			for(int k = 1; k <= x; k++){
				if(k < x){
					printf("%d ", arr5[j][k]);
				}
				else{
					printf("%d", arr5[j][k]);
				}
			}
			puts("");
		}
	}
	
	return 0;
}
