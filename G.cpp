#include <stdio.h>

int main(){
	
	char str[255];
	
	scanf("%[^\n]", str); getchar();
	
	printf("Happy Birthday to %s.\n", str);
	
	return 0;
}
