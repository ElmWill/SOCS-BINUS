#include <stdio.h>

int main(){
	
	int t, a, b, isi, kosong, total;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		total = 0;
		isi = 0;
		kosong = 0;
		scanf("%d %d", &a, &b);
		isi = a;
		while(isi != 0){
			total += isi;
			kosong += isi;
			isi = kosong /b;
			kosong %= b;
		}
		printf("Case #%d: %d\n", i, total);
	}
	
	return 0;
}
