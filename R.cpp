#include <stdio.h> 

int main(){
	
	int t, n;
	long long int a, b;

	scanf("%d", &t);
	
	for (int i = 1; i <= t; i++) {
		unsigned long long int h = -1;
		scanf("%d", &n);


		for (int j = 0; j < n; j++) {
			scanf("%lld", &a);
			if (j != 0) {
				if (b >= a)  {
					if (b - a < h){
						h = b - a;	
					}
				} 
				else
				{
					if (a - b < h){
						h = a - b;	
					} 
				}	
			}
			b = a;
		}
		printf("Case #%d: %llu\n", i, h);
	}
	return 0;
}
