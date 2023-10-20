#include <stdio.h>

int main(){
	
	int x, y, k;
	int t1 = 0;
	int t2 = 0;
	
	scanf("%d %d %d", &x, &y, &k);
	fflush(stdin);
	
	t1 = k - x;
	t2 = y - k;
	
	if(t1 >= 0 && t2 >= 0 && t1 == t2){
		printf("%d\n",t1);
	}
	else{
		puts("-1");
	}
		
	return 0;
}
