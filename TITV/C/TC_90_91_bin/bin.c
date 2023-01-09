#include "stdio.h"
#include "stdlib.h"
struct NgaySinh{//Truong ten du lieu
	int ngay;
	int thang;
	int nam;
};
int main(){
	
	FILE *f;
	// Tao, mo file
	f = fopen("Bai_90.bin", "wb");//write binary
	if(f==NULL){
		printf("\n Loi tao, mo file!");
		exit(1);
	}
	// Ghi du lieu
	NgaySinh n1;//dia chi bien.bien
	n1.ngay = 2;
	n1.thang = 11;
	n1.nam = 1999;
	//Xuat ra man hinh de xem
	printf("%d/%d/%d", n1.ngay, n1.thang, n1.nam);
	//Nhap du lieu --> file Bai_90.bin
	fwrite(&n1, sizeof (struct NgaySinh), 1, f);
	//FILE *f: Yeu cau con tro f nhap 1 du lieu kich thuoc sizeof(struct Ngaysinh)(12bytes),nhap dia chi bien (&n1)(truyen du lieu)
	//tao file Bai_90.bin
	//1: thuc hien 1 lenh
	//12bytes cho struct Ngaysinh
	//gan du lieu --> n1.ngay; n1.thang; n1.year
	
	// Dong file
	fclose(f);
	return 0;
}
