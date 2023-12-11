#include <stdio.h>
#include <string.h>


int main(){
	
	int t;
	char string[1001];
	char newString[1001];
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%[^\n]", string);
		getchar();
		int len = strlen(string);
		printf("Case #%d: ", i);
		for(int j = 0; j < len; j++){
			if(string[j] == 'a'|| string[j] == 'i'|| string[j] == 'u'|| string[j] == 'e'|| string[j] == 'o'|| string[j] == 'A'|| string[j] == 'I'|| string[j] == 'U'|| string[j] == 'E'|| string[j] == 'O'){
				continue;
			}
			else{
				printf("%c", string[j]);
			}
		}
		puts("");
	}
	
	return 0;
}
