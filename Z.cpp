#include <stdio.h>

int main(){
	int t;
	double a1, b1, c1, d1;
	double a2, b2, c2, d2;
	double a3, b3, c3, d3;
	
	scanf("%d", &t);
	
	scanf("%lf %lf %lf %lf", &a1, &b1, &c1, &d1);
	
	scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
	
	scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);
	
	
	double i =(2*(a1/1) + 4*(b1/2) + 4*(c1/3) + 2*(d1/4));
	double j =(2*(a2/1) + 4*(b2/2) + 4*(c2/3) + 2*(d2/4));
	double k =(2*(a3/1) + 4*(b3/2) + 4*(c3/3) + 2*(d3/4));
	
	printf("%.2lf\n", i);
	printf("%.2lf\n", j);
	printf("%.2lf\n", k);
	
	return 0;
}
