#include "stdio.h"
#include "string.h"
#include "time.h"

struct date{
	int ngay;
	int thang;
	int nam;
};

struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};
typedef SinhVien SV;
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
	printf("\nNgay sinh"); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	printf("\nDiem Mon 1: "); scanf("%f", &sv.diemMon1);
	printf("\nDiem Mon 2: "); scanf("%f", &sv.diemMon2);
	printf("\nDiem Mon 3: "); scanf("%f", &sv.diemMon3);
	printf("\nMa Lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}

void inSinhVien(SV sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm* NOW = localtime(&TTIME);
	int namHienTai = NOW->tm_year+1900;
	sv.tuoi = namHienTai - sv.ngaySinh.nam;
}


void tinhDiemTrungBinh(SV *sv){
	sv->diemTrungBinh = (sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
}

void xepLoai(SV &sv){
	if(sv.diemTrungBinh>9){
		strcpy(sv.hocLuc, "XUAT SAC");
	}else if(sv.diemTrungBinh>8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTrungBinh>7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTrungBinh>5){
		strcpy(sv.hocLuc, "TRUNG BINH");
	}else{
		strcpy(sv.hocLuc, "YEU");
	}
	
}
void capNhatSinhVien(SV &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	tinhDiemTrungBinh(&sv);
	xepLoai(sv);
}
void nhapDanhSachSinhVien(SV ds[], int &n){
	//Nhap lien tiep so sinh vien vao danh sach
	do{
		printf("\nNhap vao n: ");
		scanf("%d", &n);
	}while (n<0);
	for(int i=0; i<n; i++){
		printf("Nhap vao sinh vien thu %d: ", i);
		capNhatSinhVien(ds[i]);//ds[i]
	}
}
void xuatDanhSachSinhVien(SV ds[], int &n){
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for(int i=0; i<n; i++){
		inSinhVien(ds[i]);
		printf("\n");
	}
}
float timMax_DiemTrungBinh(SV ds[], int n){
	float max = ds[0].diemTrungBinh;
	for(int i=0; i<n; i++){
		if(max<ds[i].diemTrungBinh){
			max = ds[i].diemTrungBinh;
		}
	}
	return max;
}
//Tim min tuoi ham tra ve so nguyen --> int timMin_Tuoi
int timMin_Tuoi(SV ds[], int n){
	int min = ds[0].tuoi;
	for(int i=0; i<n; i++){
		if(min>ds[i].tuoi){
			min = ds[i].tuoi ;
		}
	}
	return min;
}
//Su dung hanh so sanh chuoi strcmp
void xuatDanhSachSinhVienXepLoai(SV ds[], int n){
	printf("\n Danh sach sinh vien xep loai gioi");
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for (int i=0; i<n; i++){
		if(strcmp(ds[i].hocLuc,"GIOI")==0){//dung 
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
	printf("\n Danh sach sinh vien theo lop %s ", lop);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	for (int i=0; i<n; i++){
		if(strcmp(ds[i].maLop, lop)){//dung 
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}
//tim kiem strstr ( ) 
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	//0 --> false
	//1 --> True
	for (int i=0; i<n; i++){
		if(strstr(ds[i].ten, ten));
		return 1;
	}
	return 0;
}
//Neu ID trung nhau thi don mang len
void xoaSinhVienTheoId(SV ds[], int &n, char id){
	for(int i=0; i<n; i++){
		if(ds[i].id == id){
			for(int j=i; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
		}
	}
}
//tang dan --> thi hoan doi vi tri luu tru cua 2 ban do
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh> ds[j].diemTrungBinh){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;
				//Hoan doi 2 gia tri dia chi ds[i] va ds[j]
			}
		}
	}
}
//Neu 2 ten (chuoi) = nhau thi ta sep
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(ds[i].ten, ds[j].ten)>0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;	
			}
		}
	}
	
}
int main(){
	SV ds[100];
	int n;
	nhapDanhSachSinhVien(ds, n);
	xuatDanhSachSinhVien(ds, n);
	printf("\n Max DTB = %.2f", timMax_DiemTrungBinh(ds, n));
	printf("\n Min Tuoi = %d", timMin_Tuoi(ds, n));
	xuatDanhSachSinhVienTheoLop(ds, n, "DH01");
	xuatDanhSachSinhVienXepLoai(ds, n);
	printf("\nKet qua tim sinh vien: %d", timSinhVienTheoTen(ds, n, "AN"));
	sapXepDanhSachSinhVienTheoTen(ds, n);
	printf("\nDanh sach sau khi sap xep theo ten");
	xuatDanhSachSinhVien(ds, n);
	xoaSinhVienTheoId(ds, n, 1);
	printf("\nDanh sach sau khi xoa");
	xuatDanhSachSinhVien(ds, n);
}
