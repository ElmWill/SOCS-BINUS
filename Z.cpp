#include <stdio.h>

int main() {
    int breath, stairs;
    char step[10001];
    int count1, countLast, countFirst, flag;
    int t;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++){
        count1 = 0;
        int value = 0;
		countLast = 0;
		countFirst = 0;
		
        scanf("%d %d", &stairs, &breath);
        getchar(); 

        scanf(" %[^\n]", step); 
	
        for(int j = 0; j < stairs; j++ ){
        	if(step[j] == '1'){
			
        	count1++;
			}
		}
        if(count1 > 1){
			for(int j = stairs - 1; j >= 0; j--){
        		if(step[j] == '1'){
        			break;
				}
				countLast++;
			}    	
        	for(int j = 0; j < stairs; j++){
        		if(step[j] == '1'){
        			break;
				}
				countFirst++;
			}
        	
		}
		else{
			if(breath >= stairs){
				value = 0;				
			}
			if(breath < stairs){
				value = 1;
			}	
		}
		if(countFirst < breath && countLast < breath && count1 > 1){
			value = 0;
		}
		else if(count1 > 1){
			value = 1;
		}
	
        printf("Case #%d: ", i);
        if(value == 0){
            printf("Alive\n");
        }
		else{
            printf("Dead\n");
        }
	}
    

    return 0;
}
