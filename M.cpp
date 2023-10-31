#include <stdio.h>

int Function(int num1, int num2){
    int temp;
    
    if(num1 == num2){
        return 1;
    }
    
    if(num1 == 1){
        return 0;
    }
    
    if(num1 % 2 == 0){
        temp = num1 / 2;
    }
	else{
        temp = num1 * 3 + 1;
    }
    
    if(temp == num1){
        return 0;
    }
    
    return Function(temp, num2);
}

int main(){
    int t, a, b;
    
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        
        printf("Case #%d: ", i);
        if(Function(a, b) == 0){
            puts("NO");
        }
		else{
            puts("YES");
        }
    }
    
    return 0;
}

