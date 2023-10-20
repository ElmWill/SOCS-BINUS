#include <stdio.h>

int main(){
	
	char name[255];
	
	scanf("%[^\n]", name); getchar();
	
	printf("Halo %s\n", name);
	
	return 0;
}
