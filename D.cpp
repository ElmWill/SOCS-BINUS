#include <stdio.h>
#include <math.h>

int main(){
	
	int t, x, flag = 0;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &x);
		printf("Case #%d : ", i);
		flag = 0;
//		int pangkat2 = sqrt(x);
//		int pangkat3 = cbrt(x);
		if(((int)sqrt(x)) * sqrt(x) == x){
			printf("square");
			flag = 8;
		}
	
		if(((int)cbrt(x))* cbrt(x) * cbrt(x) == x){
			if(sqrt(x) * sqrt(x) == x){
				printf(" cubic");
			}
			else{
				printf("cubic");
			}
			flag = 8;
		}
		
//		else if(pangkat3 * pangkat3 * pangkat3 == x){
//			printf("cubic");
//			flag = 8;
//		}
		
		if(flag != 8){
			for(int j = x-1; j > 1; j--){
				
				if(x % j == 0){
					flag = 1;
					break;
				}
			}
			if(flag == 1){
				printf("none");
			}
			if(flag == 0){
				printf("prime");
			}
		}
		printf("\n");
	}
	
	return 0;
}
