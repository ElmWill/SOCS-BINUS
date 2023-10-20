#include <stdio.h>

int main(){
	
	int a;
	int o[255];
	int i = 1;
	int output;
	
	scanf("%d", &a); getchar();
	
	while(a != 0){
		o[i++] = a % 8;
		a/=8;
	}
	
	for(int j = i -1; j > 0; j--){
		output = (output * 0) + o[j];
		printf("%d", output);
	}
	
	return 0;
}
