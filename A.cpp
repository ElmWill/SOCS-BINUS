#include <stdio.h>

struct Mahasiswa{
	char Nama[255];
	char NIM[255];
	int umur;
	char Kode[255];
	char POB[255];
	char DOB[255];
	char Sekolah[255];
	int num;
	int tinggi;
	char Bank[255];
};



int main(){
	
	struct Mahasiswa mahasiswa[1001];
	
	int t;
	
	scanf("%d", &t); getchar();
	
	for(int i = 1; i <= t; i++){
		scanf(" %[^\n]", &mahasiswa[i].Nama);
		scanf(" %[^\n]", &mahasiswa[i].NIM);
		scanf("%d", &mahasiswa[i].umur);
		scanf(" %[^\n]", &mahasiswa[i].Kode); 
		scanf(" %[^\n]", &mahasiswa[i].POB);
		scanf(" %[^\n]", &mahasiswa[i].DOB);
		scanf(" %[^\n]", &mahasiswa[i].Sekolah);
		scanf("%d", &mahasiswa[i].num);
		scanf("%d", &mahasiswa[i].tinggi);
		scanf(" %[^\n]", &mahasiswa[i].Bank);
	}
	
	for(int i = 1; i <= t; i++){
		printf("Mahasiswa ke-%d:\n", i);
		printf("Nama: %s\n", mahasiswa[i].Nama);
		printf("NIM: %s\n", mahasiswa[i].NIM);
		printf("Umur: %d\n", mahasiswa[i].umur);
		printf("Kode Pos: %s\n", mahasiswa[i].Kode);
		printf("Tempat Lahir: %s\n", mahasiswa[i].POB);
		printf("Tanggal Lahir: %s\n", mahasiswa[i].DOB);
		printf("Almamater SMA: %s\n", mahasiswa[i].Sekolah);
		printf("Jumlah Saudara Kandung: %d\n", mahasiswa[i].num); 
		printf("Tinggi Badan: %d\n", mahasiswa[i].tinggi); 
		printf("NOMOR REKENING: %s\n", mahasiswa[i].Bank); 
	}
	
	
	return 0;
}
