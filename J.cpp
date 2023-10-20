#include <stdio.h>

int main(){
	
	double a, b, c;
	
	scanf("%lf %lf", &a, &b); getchar();
	
	c = (b/a)*100;
	
	printf("%.4lf%%\n",c);
	
	
	return 0;
}
