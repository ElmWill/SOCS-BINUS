#include <stdio.h>

int main(){
	
	int a;
	
	scanf("%d", &a); getchar();
	
	if(a < 10){
		printf("%d\n",a);
	}
	else if(a >= 10 && a <= 15){
		switch(a){
			case 10:{
				puts("a");
				break;
			}
			case 11:{
				puts("b");
				break;
			}
			case 12:{
				puts("c");
				break;
			}
			case 13:{
				puts("d");
				break;
			}
			case 14:{
				puts("e");
				break;
			}
			case 15:{
				puts("f");
				break;
			}
		}
	}
	else{
		
		int b = a / 16;
		int c = a % 16;
		
		if(c >= 10){
			
			switch(c){
				
				case 10:{
					printf("%da\n",b);
					break;
				}
				case 11:{
					printf("%db\n",b);
					break;
				}
				case 12:{
					printf("%dc\n",b);
					break;
				}
				case 13:{
					printf("%dd\n",b);
					break;
				}
				case 14:{
					printf("%de\n",b);
					break;
				}
				case 15:{
					printf("%df\n",b);
					break;
				}
			}
		}
		else{
			printf("%d%d\n", b, c);
//			printf("%x",a);
		}	
	}
	
	return 0;
}
