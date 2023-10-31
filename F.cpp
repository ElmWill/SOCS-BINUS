#include <stdio.h>
#include <string.h>

int main(){
	
	int t, len;
	char string[10000];
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%[^\n]", string); getchar();
		char huruf[10000] = {0};
		len = strlen(string) - 1;
		for(int j = 0; j <= len; j++){
			huruf[j] = string[j];
		}
		printf("Case #%d: ", i);
		for(int j = len; j >= 0; j--){
			if(j > 0){
				printf("%c", huruf[j]);
			}
			else{
				printf("%c\n", huruf[j]);
			}
		}
	}
	
	return 0;
}
