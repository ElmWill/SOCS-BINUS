#include <stdio.h>

int main(){
	
	int umur;
	char nama[255];
	char nis[255];
	
	scanf("%[^\n]", nama); getchar();
	scanf("%s %d", nis, &umur); getchar();
	
	printf("Name: %s\n",nama);
	printf("NIS: %s\n",nis);
	printf("Age: %d\n",umur);
	
	return 0;
}
