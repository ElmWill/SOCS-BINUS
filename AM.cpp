#include <stdio.h>

int main() {
	int t;
	
	scanf("%d", &t);
	getchar();
	
	for(int i = 1; i <= t; i++) {
		int n;
		
		scanf("%d", &n);
		getchar();
		
		printf("Case #%d:\n", i);
		for(int j = 1; j <= n; j++) {
			printf("%d ", j);
			if((((j % 3) == 0) || ((j % 5) == 0)) && ((j % 15) != 0)) {
				puts("Jojo");
			} else {
				puts("Lili");
			}
		}
	}
	
	return 0;
}
