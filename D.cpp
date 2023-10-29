#include <stdio.h>


int main(){
	
	char str[255];
	int t, n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case #%d: ",i);
		
		for(int j = 0; j <= n; j++){
			scanf("%c", &str[j]);
			if(str[j] >= 'a' && str[j] <= 'z'){
				printf("%c", str[j]);
			}
			else{
				continue;
			}
		}
		puts("");
	}
	
	
	return 0;
}
