#include <stdio.h>
#include <string.h>

struct Student{
	char Name[255];
	int score;
};

void Bubble(int n, struct Student arr[1001]){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i].score < arr[j].score){
				struct Student temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else if(arr[i].score == arr[j].score){
				if(strcmp(arr[i].Name, arr[j].Name) > 0){
					struct Student temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

int Linear(struct Student arr[], int n, char target[]){
	for(int i = 0; i < n; i++){
//		printf("Comparing %s with %s\n", arr[i].Name, target);
		int cmp = strcmp(target, arr[i].Name);
//		printf("%d\n", cmp);
		if(cmp == 0){
//			printf("Found at index %d\n", i);
			return i;
		}
	}
	return -1;
}

int main(){
	
	struct Student student[1001];
	int t, n;
	char search[255];
	
	scanf(" %d", &t);getchar();
	for(int i = 1; i <= t; i++){
		scanf(" %d", &n);getchar();
		for(int j = 0; j < n; j++){
			scanf("%[^#]#%d", &student[j].Name, &student[j].score); getchar();
		}
		
		Bubble(n, student);
		
//		for(int j = 0; j < n; j++){
//			printf("%s %d\n", student[j].Name, student[j].score);
//		}
		
		scanf(" %s", search);
		int rank = Linear(student, n, search);
		printf("Case #%d: %d\n", i, rank + 1);
	}
	
	
	return 0;
}
