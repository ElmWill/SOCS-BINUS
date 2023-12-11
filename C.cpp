#include <stdio.h>
#include <string.h>

int main(){
	
	FILE *File_Input = fopen("testdata.in", "r");
	
	int t; 
    fscanf(File_Input, "%d\n", &t);
    
	
	for(int i = 1; i <= t; i++){
		
		char string[101];
		int Switch;
		
		fscanf(File_Input, "%[^\n]\n", &string);
		fscanf(File_Input, "%d\n", &Switch);
		
		
		int count_huruf[26];  
		int convert[26];      
		int change_convert[26]; 
		
		for(int j=0; j<26; j++){ 
			count_huruf[j] = 0;
			convert[j] = 0;
		}
		
		
		char selectedChar;
		char change;
		
		for (int j = 0; j < Switch; j++){
			fscanf(File_Input, "%c %c\n", &selectedChar, &change);
			
			if(convert[selectedChar - 'A'] == 0){
				convert[selectedChar - 'A'] = 1;
				
				for(int k=0; string[k] != '\0'; k++){
					if(string[k] == selectedChar){
						string[k] = change;
					}
				}
			}
		}
		
		
		for(int j=0; string[j] != '\0'; j++){
			count_huruf[string[j] - 'A']++;
		}
		
		
		for (int j=0; j<26; j++){ // 26 karena jumlah alphabet 'A' - 'Z' = 26
			if(count_huruf[j] > 0){
				printf("%c %d\n", j + 'A', count_huruf[j]);
			}
		}
	}
	
	fclose(File_Input);
	
	return 0;
}
