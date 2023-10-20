#include <stdio.h>

int main(){
	
	int t, n;
	char a ;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case #%d: ", i);
		a = '`';
		for(int j = 1; j <= n; j++){
			a += 1;
			if(j < n){
				printf("%c", a);
			}
			else{
				printf("%c\n", a);
			}
		}
	}
	
	return 0;
}
