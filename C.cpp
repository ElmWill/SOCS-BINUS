#include <stdio.h>

int main(){
	
	int t;
	int k,n,m;
	//k butuh, n di rumah, m di toko
	scanf("%d",&t);getchar();
	
	
	for(int i = 1; i <= t; i++){
		printf("Case #%d: ",i);
		scanf("%d %d %d",&k ,&n ,&m);getchar();
		if(n + m >= k){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	
	return 0;
}
