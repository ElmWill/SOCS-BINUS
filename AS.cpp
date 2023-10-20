#include <stdio.h>

int main(){
	
	int t, n, count, nilai;
	char arr1[255], arr2[255];
	
	scanf("%d", &t);
//	fflush(stdin);
	getchar();
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
//		fflush(stdin);
		getchar();
		for(int j = 1; j <= n; j++){
			scanf("%c", &arr1[j]);
		}
//		fflush(stdin);
		getchar();
		for(int j = 1; j <= n; j++){
			scanf("%c", &arr2[j]);
		}
//		fflush(stdin);
		getchar();
		count = 0;
		for(int j = 1; j <= n; j++){
			if(arr1[j] == arr2[j]){
				count++;
			}
			else{
				continue;
			}
		}

		nilai = count * 100 / n;
		printf("Case #%d: %d\n", i, nilai);
	}
	
	
	return 0;
}
