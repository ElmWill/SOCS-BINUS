#include <stdio.h>

int main(){
	int index[255] = {0};
	int n;
	int a;
	int count = 0;
	
	scanf("%d", &n);
	for(int i = 1; i <= n * n; i++){
		scanf("%d", &a);
		index[a]++;
		//index[1]++ = 1 ada 1
		//index[1]++ = 1 ada 2
		//index[2]++ = 2 ada 1
	}
	//2
//	1 1
//	2 0
	// n = 2
	// a = 1
	// index 1 = 0 + 1
	// a = 1
	// index 1 = 1 + 1
	// a = 2
	// index 2 = 0 + 1
	// a = 0
	// index 0 = 0 + 1
	//ngecek
	// index[i = 1] = 2 terus n = 2
	// index[i = 2] = 1 terus n = 2 karena beda count++
	
//	3
//1 0 1
//0 0 2
//0 0 0
	//n = 3
	//a = 2
	// index [a = 2] = 0 + 1
	
	for(int i = 1; i <= n; i++){
		if(index[i] < n){
			count++;
		}
	}
		printf("%d\n", count);
		return 0;
	}
