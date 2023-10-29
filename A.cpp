#include <stdio.h>


int main(){
	
	int t, n, m, p, dupe;
	
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		dupe = 0;
		scanf("%d %d", &n, &m);
		getchar();
		bool pulau[n + 1] = {false};
		
		for(int j = 0; j < m; j++){
			scanf("%d", &p);
			getchar();
			if(pulau[p]){
				dupe++;
			}
			else{
				pulau[p] = true;
			}
		}
		printf("Case #%d: %d\n", i, dupe);
	}
	
	return 0;
}
