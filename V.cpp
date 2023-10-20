#include <stdio.h>

int main(){
	int t;
	double c1, c2, c3;
	double r1, r2, r3;
	double f1, f2, f3;
	double k1, k2, k3;
	
	scanf("%d", &t);
	scanf("%lf", &c1); getchar();
	scanf("%lf", &c2); getchar();
	scanf("%lf", &c3); getchar();
	
	r1 = (0.8 * c1);
	r2 = (0.8 * c2);
	r3 = (0.8 * c3);
	
	f1 = (1.8 * c1) + 32;
	f2 = (1.8 * c2) + 32;
	f3 = (1.8 * c3) + 32;
	
	k1 = c1 + 273;
	k2 = c2 + 273;
	k3 = c3 + 273;
	
	printf("%.2lf %.2lf %.2lf\n", r1, f1, k1);
	printf("%.2lf %.2lf %.2lf\n", r2, f2, k2);
	printf("%.2lf %.2lf %.2lf\n", r3, f3, k3);
	
	return 0;
}
