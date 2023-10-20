#include <stdio.h>

int main(){
	
	long int n, m, nx[100001], mx[100001], max, count;
	
	scanf("%ld %ld", &n, &m);
	max = 0;
	count = 0;
	for(long int i = 0; i < n; i++){
		scanf("%ld", &nx[i]);
		getchar();
		if(max < nx[i]){
			max = nx[i];
		}
		else{
			continue;
		}
	}
	
	for(long int j = 0; j < n; j++){
			scanf("%ld", &mx[j]);
			
			if(max > mx[j]){
				count++;
			}
			else{
				continue;
			}
		}
		
	if(count == n){
			printf("The dark secret was true\n");
		}
		else{
			printf("Secret debunked\n");
		}
	
	return 0;
}
