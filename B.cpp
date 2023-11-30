#include <stdio.h>
#include <string.h>

char str1[1000], str2[1000], temp[1000];
int a;
int count = 1;

void FiboStr(){
	
    count++;
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcat(str2, temp);
    
    if (count != a) {
        FiboStr();
    }
}

int main(){
	
    int t;
    scanf("%d", &t);
    getchar();

    for(int i = 1; i <= t; i++){
        count = 1;

        scanf("%d %s %s", &a, str1, str2);
        getchar(); 
		
        if(a > 1){
        FiboStr();
        printf("Case #%d: %s\n", i , str2);
        
    	} else if(a == 1){
    		printf("Case #%d: %s\n", i , str2);
		} else if(a == 0){
    		printf("Case #%d: %s\n", i , str1);
		}
    }

    return 0;
}

