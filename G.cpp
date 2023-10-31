#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char str1[1001], str2[1001];
    
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%s", str1);
        int len = strlen(str1);
        
        for(int j = len - 1, k = 0; j >= 0 && k < len; j--, k++){
            str2[k] = str1[j];
        }
        str2[len] = '\0';

        int l = strcmp(str1, str2);
        printf("Case #%d: ", i);
        
        if(l == 0){
            puts("yes");
        }
		else{
            puts("no");
        }
    }
    
    return 0;
}

