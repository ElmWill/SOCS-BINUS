#include <stdio.h>

int main(){
	
	int a;
	char string [255];
	
	scanf("%[^\n]", string); getchar();
	scanf("%d", &a); getchar();
	
	printf("%s\n", string);
	printf("%d\n", a);
	
	
	return 0;
}
