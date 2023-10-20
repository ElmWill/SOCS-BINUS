#include <stdio.h>

int main(){
	
	char str[255];
	
	scanf("%[^\n]", str); getchar();
	
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", str);
	
	return 0;
}
