#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g, h;
	
	scanf("%d %d",&a ,&b);getchar();
	scanf("%d %d",&c ,&d);getchar();
	scanf("%d %d",&e ,&f);getchar();
	scanf("%d %d",&g ,&h);getchar();

	double i, j, k, l;
	i= b/(1 - 0.01 * a);
	j= d/(1 - 0.01 * c);
	k= f/(1 - 0.01 * e);
	l= h/(1 - 0.01 * g);

	
	printf("$%.2lf\n",i);
	printf("$%.2lf\n",j);
	printf("$%.2lf\n",k);
	printf("$%.2lf\n",l);
	
	
	return 0;
}
