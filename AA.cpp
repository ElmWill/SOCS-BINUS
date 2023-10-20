#include <stdio.h>

int main(){
	
	int t, ut, ua;
	double dt, dut, dua , total;
	
	scanf("%d %d %d", &t, &ut, &ua);getchar();
	
	dt = t * 0.2;
	dut = ut * 0.3;
	dua = ua * 0.5;
	total = dt + dut + dua;
	
	printf("%.2lf\n",total);
	
	return 0;
}
