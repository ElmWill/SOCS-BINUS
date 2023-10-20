#include <stdio.h>

int main(){
	
	int t, n;
	long long int k, temp;
	char str[255], str3[255];
	char str2 = 'a';
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d %lld", &n, &k);
		getchar();
		for(int j = 1; j <= n; j++){
			scanf("%c", &str[j]);
			temp = k;
			if(str[j] == 'a'){
				temp += 0;
			}
			else if(str[j] == 'b'){
				temp += 1;
			}
			else if(str[j] == 'c'){
				temp += 2;
			}
			else if(str[j] == 'd'){
				temp += 3;
			}
			else if(str[j] == 'e'){
				temp += 4;
			}
			else if(str[j] == 'f'){
				temp += 5;
			}
			else if(str[j] == 'g'){
				temp += 6;
			}
			else if(str[j] == 'h'){
				temp += 7;
			}
			else if(str[j] == 'i'){
				temp += 8;
			}
			else if(str[j] == 'j'){
				temp += 9;
			}
			else if(str[j] == 'k'){
				temp += 10;
			}
			else if(str[j] == 'l'){
				temp += 11;
			}
			else if(str[j] == 'm'){
				temp += 12;
			}
			else if(str[j] == 'n'){
				temp += 13;
			}
			else if(str[j] == 'o'){
				temp += 14;
			}
			else if(str[j] == 'p'){
				temp += 15;
			}
			else if(str[j] == 'q'){
				temp += 16;
			}
			else if(str[j] == 'r'){
				temp += 17;
			}
			else if(str[j] == 's'){
				temp += 18;
			}
			else if(str[j] == 't'){
				temp += 19;
			}
			else if(str[j] == 'u'){
				temp += 20;
			}
			else if(str[j] == 'v'){
				temp += 21;
			}
			else if(str[j] == 'w'){
				temp += 22;
			}
			else if(str[j] == 'x'){
				temp += 23;
			}
			else if(str[j] == 'y'){
				temp += 24;
			}
			else if(str[j] == 'z'){
				temp += 25;
			}
			else{
				continue;
			}
			
			while(temp > 25){
				temp %= 26;
			}
			
			str3[j] = 'a' + temp;
		}
		printf("Case #%d: ", i);
		for(int l = 1; l <= n; l++){
			if(l < n){
				printf("%c", str3[l]);
			}
			else{
				printf("%c\n", str3[l]);
			}
		}
	}
	
	return 0;
}
