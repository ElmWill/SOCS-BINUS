#include <stdio.h>
#include <string.h>


struct Mahasiswa{
	char NIM[1001];
	char Nama[1001];
};


void Bubble(int n, struct Mahasiswa arr[1001]){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(strcmp(arr[i].NIM, arr[j].NIM) > 0){
				struct Mahasiswa temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	
	FILE *inputFile = fopen("testdata.in","r");
	
	int n;
	fscanf(inputFile, "%d", &n);
	
	struct Mahasiswa array[1001];
	
	for(int i = 0; i < n; i++){
		fscanf(inputFile, "%s %[^\n]", &array[i].NIM, &array[i].Nama);
	}
	
	Bubble(n, array);
	
	for(int i = 0; i < n; i++){
		printf("%s %s\n", array[i].NIM, array[i].Nama);
	}
	
	fclose(inputFile);
	return 0;
}
