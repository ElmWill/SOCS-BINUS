#include <stdio.h>
#include <string.h>

int main(){
	
	long long t;
	
	char nums1[255], nums2[255], storage[255][255];
	scanf("%lld",&t); getchar();
	for(int i = 0; i < t; i++){
		long long urutan = 0;
		
		scanf("%s %s",nums1,nums2); getchar();
		
		long long nums1len, nums2len;
		
		nums1len = strlen(nums1);
		nums2len = strlen(nums2);
		
		if(nums2len > nums1len){
			char temp[255];
			strcpy(temp, nums1);
			strcpy(nums1, nums2);
			strcpy(nums2, temp);
		}
		
		nums1len = strlen(nums1);
		nums2len = strlen(nums2);
		
		long long selisih = nums1len - nums2len;
		long long kurang = selisih;
		
		long long nums1int, nums2int;
		for(int j = 0; j < nums1len; j++){
			nums1int = nums1[j] - '0';
			if(kurang > 0){
				nums2int = 0; 
				kurang--;
			}
			else{
				nums2int = nums2[j-selisih] - '0';
			}
			
			long long total = (nums1int + nums2int) % 10;
			storage[i][urutan] = total + '0';
			urutan++;
		}
	}
	
	for(int i = 0; i < t; i++){
		printf("Case #%d: ", i + 1);
		long long jika0;
		for(long long j = 0; j < strlen(storage[i]); j++){
			if(storage[i][j] != '0'){
				jika0 = j;
				break; 
			}
			
			else if(j == (strlen(storage[i]) - 1)){
				jika0 = j;
			}
		}
		
		for(int j = jika0; j < strlen(storage[i]); j++){
			printf("%c", storage[i][j]);
		}	
		printf("\n");
	}
	
	
	return 0;
}
