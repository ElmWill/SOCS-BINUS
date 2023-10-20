#include <stdio.h>

int main() {
	int n, posisi = 0;
	
	scanf("%d", &n);
	getchar();
	
	for(int i = 0; i < n; i++) {
		int k;
		
		scanf("%d", &k);
		getchar();
		
		posisi += k;
		
			switch(posisi) {
				case 9: {
					posisi = 21;
					
					break;
				}
				
				case 33: {
					posisi = 42;
					
					break;
				}
				
				case 76: {
					posisi = 92;
					
					break;
				}
				
				case 53: {
					posisi = 37;
					
					break;
				}
				
				case 80: {
					posisi = 59;
					
					break;
				}
				
				case 97: {
					posisi = 88;
					
					break;
				}
			}
		}
	
	printf("%d\n", posisi);
	
	return 0;
}

