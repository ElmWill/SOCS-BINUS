#include <stdio.h>

int main(){
	
	int t, n, lili, bibi;
	char str[255];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		lili = 0;
		bibi = 0;
		for(int j = 0; j <= n; j++){
			scanf("%c", &str[j]);
			if(str[j] == 'L'){
				lili++;
			}
			else if(str[j] == 'B'){
				bibi++;
			}
			else{
				continue;
			}
		}
		
//		printf("%d\n", lili);
//		printf("%d\n", bibi);
		if(lili > bibi){
			puts("Lili");
		}
		else if(bibi > lili){
			puts("Bibi");
		}
		else{
			puts("None");
		}
	}
	
	return 0;
}
