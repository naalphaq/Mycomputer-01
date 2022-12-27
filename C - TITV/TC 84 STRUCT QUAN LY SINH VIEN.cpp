//QUAN LY DU LIEU CUA 1 SINH VIEN
#include "stdio.h"
#include "string.h"
#include "time.h"
struct date{
	int day;
	int month;
	int year;
};
//
struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;//tinh tuoi
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};
void xoaXuongdong(char x[]){
	size_t len=strlen(x);
	if(x[len-1]='\n'){
			x[len-1]='\0';
		}		
	
}
//nhap du lieu
typedef SinhVien SV;//Viet gon SinhVien SV
void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);// (char x1[100], &m) --> int main () char ten[100]; nhapMang(ten,phantu);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin);xoaXuongdong(sv.ten);//Day du lieu di
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin);xoaXuongdong(sv.gioiTinh);
	printf("\nNgay sinh: "); scanf("%d%d%d", &sv.ngaySinh.day, &sv.ngaySinh.month, &sv.ngaySinh.year);
	printf("\nDiem mon 1: "); scanf("%f", &sv.diemMon1);
	printf("\nDiem mon 2: "); scanf("%f", &sv.diemMon2);
	printf("\nDiem mon 3: "); scanf("%f", &sv.diemMon3);
	printf("\nMa Lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin);xoaXuongdong(sv.maLop);
}
void inSinhVien(SV sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.day, sv.ngaySinh.month, sv.ngaySinh.year, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.maLop);
}
void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm* NOW = localtime(&TTIME);
	int namHienTai = NOW->tm_year+1900;
	sv.tuoi = namHienTai - sv.ngaySinh.year;
	
} 
void tinhDiemTrungBinh(SV *sv){//con tro
	sv->diemTrungBinh = (sv->diemMon1 + sv->diemMon2 + sv->diemMon3)/3;
}
void xepLoai(SV &sv){
	if(sv.diemTrungBinh>9){
		strcpy(sv.hocLuc, "XUAT SAC");//Strcpy(destination, sources);
	}else if(sv.diemTrungBinh>8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTrungBinh>7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTrungBinh>5){
		strcpy(sv.hocLuc, "TB");
	}else{
		strcpy(sv.hocLuc, "YEU");
	}
}
void capNhapSinhVien(SV &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	tinhDiemTrungBinh(&sv);
	xepLoai(sv);
	inSinhVien(sv);
}
int main(){
	SinhVien sv1;
	capNhapSinhVien(sv1);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	
}

