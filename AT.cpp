#include <stdio.h>

int main(){
	
	int t , rows;
	int l = 0;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &rows);
		for(int j = 1; j <= rows; j++){
			l = 0;
			for(int k = 1; k <= rows - j; k++){
				printf(" ");
			}
			while(l != 2 * j - 1){
				printf("*");
				l++;
			}
			puts("");
		}
	}
	
	
	return 0;
}
