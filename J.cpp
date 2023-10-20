#include <stdio.h>
#include <string.h>

int main(){
	
	int t, asci[10000], len;
	char string[10000], huruf[10000];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%s", string);
		len = strlen(string) - 1;
		for(int j = 0; j <= len; j++){
			huruf[j] = string[j];
		}
		printf("Case %d: ", i);
		for(int j = 0; j <= len; j++){
			if(j < len){
				printf("%d-", huruf[j]);
			}
			else{
				printf("%d\n", huruf[j]);
			}
		}
		
	}
	
	return 0;
}
