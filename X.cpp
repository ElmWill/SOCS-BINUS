#include <stdio.h>

int main(){
	
	int n;
	int angka = 1;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		angka = (angka * 2) + 1;
	}
	
	printf("%d\n", angka);
	return 0;
}
