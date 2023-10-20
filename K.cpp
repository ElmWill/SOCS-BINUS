#include <stdio.h>

int main(){
	
	double awal, bunga, total;
	
	scanf("%lf %lf", &awal, &bunga);
	bunga /= 100;
	
	for(int i = 1; i <= 3; i++){
		awal = awal + (awal * bunga);
	}
	
	printf("%.2lf\n", awal);
	
	return 0;
}
