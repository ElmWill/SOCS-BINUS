#include <stdio.h>

int main(){
	
	char name[255];
	
	scanf("%[^\n]", name); getchar();
	
	printf("%s-san\n", name);
	
	return 0;
}
