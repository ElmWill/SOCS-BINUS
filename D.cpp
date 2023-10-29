#include <stdio.h>

int main(){
	
	int jojo, lili, bibi, arr1[255], n, total, total1, total2, average;
	
	scanf("%d", &n);
	scanf("%d %d %d", &jojo, &lili, &bibi);
	total1 = 0;
	total2 = jojo + lili + bibi;
	for(int i = 1; i <= n; i++){
		scanf("%d", &arr1[i]);
		total1 += arr1[i];
	}
	total = total1 + total2;
	average = total / (n + 3);
	
	if(jojo >= average){
		if(lili >= average){
			if(bibi >= average){
				printf("Jojo lolos\n");
				printf("Lili lolos\n");
				printf("Bibi lolos\n");
			}
			else{
				printf("Jojo lolos\n");
				printf("Lili lolos\n");
				printf("Bibi tidak lolos\n");
			}
		}
		else{
			if(bibi >= average){
				printf("Jojo lolos\n");
				printf("Lili tidak lolos\n");
				printf("Bibi lolos\n");
			}
			else{
				printf("Jojo lolos\n");
				printf("Lili tidak lolos\n");
				printf("Bibi tidak lolos\n");
			}
		}
	}
	else{
		if(lili >= average){
			if(bibi >= average){
				printf("Jojo tidak lolos\n");
				printf("Lili lolos\n");
				printf("Bibi lolos\n");
			}
			else{
				printf("Jojo tidak lolos\n");
				printf("Lili lolos\n");
				printf("Bibi tidak lolos\n");
			}
		}
		else{
			if(bibi >= average){
				printf("Jojo tidak lolos\n");
				printf("Lili tidak lolos\n");
				printf("Bibi lolos\n");
			}
			else{
				printf("Jojo tidak lolos\n");
				printf("Lili tidak lolos\n");
				printf("Bibi tidak lolos\n");
			}
		}
	}
	return 0;
}
