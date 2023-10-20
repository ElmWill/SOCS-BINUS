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
		if(posisi < 40){
			switch(posisi) {
				case 30: {
					posisi = 10;
					
					break;
				}
				
				case 12: {
					posisi = 28;
					
					break;
				}
				
				case 35: {
					posisi = 7;
					
					break;
				}
			}
		}
		else{
		posisi -= 40;	
		}
	}
	
	printf("%d\n", posisi);
	
	return 0;
}

