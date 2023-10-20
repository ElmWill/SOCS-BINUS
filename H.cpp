#include <stdio.h>

int main(){
	
	char x1,x2,x3;
	
	scanf("%c %c %c",&x1,&x2,&x3);

	if(x1 < x2){
		if(x1 < x3){
			if(x2 < x3){
				puts("1 2 3");
			}
			else {
				puts("1 3 2");
			}
		}
		else{
			puts("3 1 2");
		}
	}
	else{//x2<x1
		if(x1 < x3){
			puts("2 1 3");
		}
		else{//x3<x1
			if(x2 < x3){
				puts("2 3 1");
			}
			else{
				puts("3 2 1");
			}
		}
	}
	
	return 0;
}
