#include <stdio.h>

int main(){
	
	int t;
	double r, h, lingkaran, persegi, tabung;
	double pi = 3.14;
	
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%lf %lf", &r, &h);
		lingkaran = 0;
		persegi = 0;
		tabung = 0;
		
		lingkaran = 2 * pi * r * r;
		persegi = 2 * pi * r * h;
		tabung = lingkaran + persegi;
		
		printf("Case #%d: %.2lf\n", i, tabung);
	}
	
	return 0;
}
