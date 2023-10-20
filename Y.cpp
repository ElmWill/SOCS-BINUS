#include <stdio.h>

int main(){
	
	int t;
	double a1, a2;
	double b1, b2;
	double c1, c2;
	
	scanf("%d", &t);
	
	scanf("%lf %lf", &a1, &a2);
	scanf("%lf %lf", &b1, &b2);
	scanf("%lf %lf", &c1, &c2);
	
	double a = (a1/100 * a2);
	double b = (b1/100 * b2);
	double c = (c1/100 * c2);
	
	printf("%.2lf\n", a);
	printf("%.2lf\n", b);
	printf("%.2lf\n", c);
	
	return 0;
}
