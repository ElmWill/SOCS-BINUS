#include <stdio.h>

int main(){
	int T;
	double a, b, c, d, e, f;
	
	scanf("%d", &T);getchar();
	scanf("%lf %lf", &a, &b);
	scanf("%lf %lf", &c, &d);
	scanf("%lf %lf", &e, &f);
	
	double i = a * b / 360;
	double j = c * d / 360;
	double k = e * f / 360;
	
	printf("%.2lf\n", i);
	printf("%.2lf\n", j);
	printf("%.2lf\n", k);
	
	return 0;
}
