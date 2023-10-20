#include <stdio.h>

int main(){
	
	int ph, m, p;
	double dph, dm, dp, total;
	
	scanf("%d %d %d", &ph, &m, &p);getchar();
	
	dph = ph * 0.2;
	dm = m * 0.3;
	dp = p * 0.5;
	total = dph + dm + dp;
	
	printf("%.2lf\n",total);
	
	return 0;
}
