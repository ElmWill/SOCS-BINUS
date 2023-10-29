#include <stdio.h>

int main(){
	
	char str1[255], td1, line1, td2;
	char str2[255], td3, line2, td4; 
	char str3[255], td5, line3, td6;
	char str4[255], td7, line4, td8;
	char str5[255], td9, line5, td10;
	int hr1, m1, hr2, m2;
	int hr3, m3, hr4, m4;
	int hr5, m5, hr6, m6;
	int hr7, m7, hr8, m8;
	int hr9, m9, hr10, m10;
	
	scanf("%s %d%c%d%c%d%c%d", str1, &hr1, &td1, &m1, &line1, &hr2, &td2, &m2); getchar();
	scanf("%s %d%c%d%c%d%c%d", str2, &hr3, &td1, &m3, &line2, &hr4, &td2, &m4); getchar();
	scanf("%s %d%c%d%c%d%c%d", str3, &hr5, &td1, &m5, &line3, &hr6, &td2, &m6); getchar();
	scanf("%s %d%c%d%c%d%c%d", str4, &hr7, &td1, &m7, &line4, &hr8, &td2, &m8); getchar();
	scanf("%s %d%c%d%c%d%c%d", str5, &hr9, &td1, &m9, &line5, &hr10, &td2, &m10); getchar();
	
	printf("%s %02d%c%02d%c%02d%c%02d\n", str1, hr1-1, td1, m1, line1, hr2-1, td2, m2); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", str2, hr3-1, td1, m3, line2, hr4-1, td2, m4); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", str3, hr5-1, td1, m5, line3, hr6-1, td2, m6); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", str4, hr7-1, td1, m7, line4, hr8-1, td2, m8); 
	printf("%s %02d%c%02d%c%02d%c%02d\n", str5, hr9-1, td1, m9, line5, hr10-1, td2, m10); 

	return 0;
}
