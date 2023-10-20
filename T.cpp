#include <stdio.h>
#include <string.h>

int main(){
	
	int t, len, angka[1001];
	char string[1001], huruf[1001];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%s", string);
		len = strlen(string);
		for(int j = 0; j < len; j++){
			huruf[j] = string[j];
			angka[j] = huruf[j];
			if(huruf[j] == 'B' || huruf[j] == 'C' || huruf[j] == 'D'){
				huruf[j] = 'A';
				angka[j] -= 'A';
			}
			else if(huruf[j] == 'F' || huruf[j] == 'G' || huruf[j] == 'H'){
				huruf[j] = 'E';
				angka[j] -= 'E';
			}
			else if(huruf[j] == 'J' || huruf[j] == 'K' || huruf[j] == 'L' || huruf[j] == 'M' || huruf[j] == 'N'){
				huruf[j] = 'I';
				angka[j] -= 'I';
			}
			else if(huruf[j] == 'P' || huruf[j] == 'Q' || huruf[j] == 'R' || huruf[j] == 'S' || huruf[j] == 'T'){
				huruf[j] = 'O';
				angka[j] -= 'O';
			}
			else if(huruf[j] == 'V' || huruf[j] == 'W' || huruf[j] == 'X' || huruf[j] == 'Y' || huruf[j] == 'Z'){
				huruf[j] = 'U';
				angka[j] -= 'U';
			}
			else{
				angka[j] = 0;
			}
		}
		printf("Case #%d:\n", i);
		for(int j = 0; j < len; j++){
			if(j < len - 1){
				printf("%c", huruf[j]);
			}
			else{
				printf("%c\n", huruf[j]);
			}
		}
		for(int j = 0; j < len; j++){
			if(j < len - 1){
				printf("%d", angka[j]);
			}
			else{
				printf("%d\n", angka[j]);
			}
		}
	}
	
	return 0;
}
