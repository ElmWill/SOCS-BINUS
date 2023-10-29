#include <stdio.h>
#include <string.h>

int main(){
    int n, m, index;
    char string[255];
    scanf("%d %d", &n, &m);


    scanf("%s", string);

    for(int i = 0; i < m; i++){
        scanf("%d", &index);
        if(index >= 0 && index < n){
            if(string[index] >= 'A' && string[index] <= 'Z'){
            	string[index] += 32;
            }else if (string[index] >= 'a' && string[index] <= 'z'){
            	string[index] -= 32;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}

