#include <stdio.h>

int main(){
	
	int t, count;
	long long int finish, total;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld", &finish);
		count = 0;
		total = 0;
		for(int j = 1; j <= finish; j++){
			
			if(total < finish){
				total += j;
				count++;
			}
		}
		printf("Case #%d: %d\n", i, count);
	}
	
	return 0;
}
