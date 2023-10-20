#include <stdio.h>

int main(){
	
	double l, b, h;
	
	scanf("%lf %lf %lf", &l, &b, &h);getchar();
	
	double segitiga = b * h;
	double persegip = 3 * b * l;
	double total = segitiga + persegip;
	
	printf("%.3lf\n", total);
	
	return 0;
}
