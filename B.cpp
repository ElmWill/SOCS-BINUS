#include <stdio.h>

int main(){
	
	int t;
	int g, b;
	
	scanf("%d",&t);getchar();
	
	
	for(int i = 1; i <= t; i++){
		printf("Case #%d: ",i);
		scanf("%d %d",&g ,&b);getchar();
		if(g > b){
			printf("Go-Jo\n");
		}
		else{
			printf("Bi-Pay\n");
		}
	}
	
	return 0;
}
