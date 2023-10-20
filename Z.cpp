#include <stdio.h>

int main(){
	
	int t;
	long long int n, breath, toxic[10001], temp;
	char string[10001];
	
	scanf("%d", &t);
	for(int i = 1; i <=t; i++){
		scanf("%lld %lld", &n, &breath);
		getchar();
		for(long long int j = 1; j <= n; j++){
			scanf("%c", &toxic[j]);
		}
		getchar();
		temp = breath - 1;
		for(long long int j = 1; j <= n; j++){
			if(temp <= 0){
				break;
			}
			if(toxic[j] == 0){
				temp -= 2;
				if(temp <= 0){
					break;
				}
			}
			else if(toxic[j] == 1){
				toxic[j] = 0;
				temp = breath - 1;
			}
		}
		if(temp <= 0){
//			printf("%lld\n", temp);
			printf("Case #%d: Dead\n", i);
		}
		else{
//			printf("%lld\n", temp);
			printf("Case #%d: Alive\n", i);
		}
	}
	
	return 0;
}
