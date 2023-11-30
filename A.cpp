#include <stdio.h>

void merge(int arr[], int left, int right){
	
	if(left == right){
		return;
	}
	
	int mid = (right - left)/2 + left;
	merge(arr, left, mid);
	merge(arr, mid+1, right);
	
	int tempArr[right - left];
	
	int leftIndex = left;
	int leftLimit = mid;
	int rightIndex = mid+1;
	int rightLimit = right;
	
	int tempArrIndex = 0;
	
	while(leftIndex <= leftLimit && rightIndex <= rightLimit){
		if(arr[leftIndex] < arr[rightIndex]){
			tempArr[tempArrIndex] = arr[leftIndex];
			leftIndex++;
			tempArrIndex++;
		}
		else{
			tempArr[tempArrIndex] = arr[rightIndex];
			rightIndex++;
			tempArrIndex++;
		}
	}
	
	
	while(leftIndex <= leftLimit){
		tempArr[tempArrIndex] = arr[leftIndex];
		leftIndex++;
		tempArrIndex++;
	}
	
	while(rightIndex <= rightLimit){
		tempArr[tempArrIndex] = arr[rightIndex];
		rightIndex++;
		tempArrIndex++;
	}
	
	tempArrIndex = 0;
	
	for(int i = left; i <= right; i++){
		arr[i] = tempArr[tempArrIndex];
		tempArrIndex++;
	}
}

int binarySearch(int arr[], int n, int find){
	
	int left = 0; 
	int right = n - 1;
	
	while(left <= right){
		int mid = (right - left)/2 + left;
		
		if(arr[mid] == find){
			return mid;
		}
		
		else if(arr[mid] < find){
			left = mid + 1;
		}
		
		else if(arr[mid] > find){
			right = mid - 1;
		}
	}
	
	return -1;
}

int main(){
	int t, n, arr[1001], find;
	
	scanf("%d",&t); getchar();
	
	for(int i = 1; i <= t; i++){
		scanf("%d",&n); getchar();
		
		for(int j = 0; j < n; j++){
			scanf("%d",&arr[j]);
		}getchar();
		
		scanf("%d",&find); getchar();
		
		merge(arr, 0, n-1);
		
//		for(int j = 0; j < n; j++){
//			printf("%d",arr[j]);
//		}
		
		int found = binarySearch(arr,n,find);
		
		printf("CASE #%d: ", i);
		
		if(found == -1){
			printf("-1 -1\n");
		}
		else if(found == n-1){
			printf("%d %d\n",arr[found-1], arr[found]);
		}
		else if(found != n-1){
			printf("%d %d\n", arr[found], arr[found+1]);
		}
	}
	
	return 0;
}
