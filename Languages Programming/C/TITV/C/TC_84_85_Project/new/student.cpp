#include "stdio.h"
#include "string.h"
#include "time.h"
#include "conio.h"

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
	char hocLuc[20];
	char maLop[30];
};
//
typedef SinhVien SV;


//
void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
//
void tinhTuoi(SV &sv);
//
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
//
void capNhatSinhVien(SV &sv);
//
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
//
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
//
void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
//
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
//
void xoaSinhVienTheoId(SV ds[], int &n, int id);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void xoaXuongDong(char x[50]){
    size_t len = strlen (x);

    if(x[len-1] == '\n'){
        x[len-1] = '\0';
    }
}
void nhapSinhVien(SV &sv){
    printf("\nID: "); scanf("%d", &sv.id);
    printf("\nTen: "); fflush(stdin); fgets(sv.ten,sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
    printf("\nGioi Tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
    printf("\nNgay Sinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
    printf("\nDiem mon 1: "); scanf("%f", &sv.diemMon1);
    printf("\nDiem mon 2: "); scanf("%f", &sv.diemMon2);
    printf("\nDiem mon 3: "); scanf("%f", &sv.diemMon3);
    printf("\nMa Lop: "); fflush(stdin); fgets(sv.maLop,sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}
void inSinhVien(SV sv){
    	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %10s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}
void tinhTuoi(SV &sv){
    //tuoi = nam hien tai - nam tuoi
    time_t TTIME = time(0);
    tm *NOW = localtime(&TTIME);

    int namHienTai = NOW->tm_year + 1900;
    sv.tuoi = namHienTai - sv.ngaySinh.nam;
}
void tinhDiemTrungBinh(SV *sv){
    sv->diemTrungBinh = (sv->diemMon1 + sv->diemMon2 + sv->diemMon3)/3; 
}
void xepLoai(SV &sv){
    if(sv.diemTrungBinh > 9){
        strcpy(sv.hocLuc , "Xuat Sac");
    }else if (sv.diemTrungBinh > 8){
        strcpy(sv.hocLuc, "Gioi");
    }else if (sv.diemTrungBinh > 7){
        strcpy (sv.hocLuc, "Kha");
    }else if (sv.diemTrungBinh > 5){
        strcpy(sv.hocLuc, "Trung Binh"); 
    }else{
        strcpy(sv.hocLuc, "Yeu");
    }
}
void capNhatSinhVien(SV &sv){
    nhapSinhVien(sv);
    tinhTuoi(sv);
    tinhDiemTrungBinh(&sv);
    xepLoai(sv);
}
void nhapDanhSachSinhVien(SV ds[], int &n){
    do{
        printf("\nNhap so luong sinh vien muon nhap vao: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<n; i++){
        capNhatSinhVien(ds[i]);//tao mang moi lan nhap vao thi gan vao gia tri cho tung gia tri mang //ds[0] = lan nhap 1  
        //Bo phan thuc hien capNhapSinhVien 1 2 3 4
        //Bo phan luu tru ds[] --> lua tru 1 2 3 4
    }
}
void xuatDanhSachSinhVien(SV ds[], int n){
    printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %10s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop\n");
    for(int i=0; i<n; i++){
        inSinhVien(ds[i]);//dua du lieu cua cai kho vao no xuat ra theo format cua Bo phan thuc hien inSinhVien
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
int timMin_Tuoi(SV ds[], int n){
    float min = ds[0].tuoi;
    for(int i=0; i<n; i++){
        if(ds[0].tuoi<min){
            min = ds[0].tuoi;
        }
    }
    return min;
}
void xuatDanhSachSinhVienXepLoai(SV ds[], int n, char xepLoai[]){
    printf("\n Danh sach sinh vien xep loai: \n");
    printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
    for(int i=0; i<n; i++){

        if(strcmp(strupr(ds[i].hocLuc), strupr(xepLoai)) == 0){ 
            inSinhVien(ds[i]);//
            printf("\n");
        }
    }
    //void xepLoai(SV &sv) --> sv.diemTrungBinh, sv.hocluc --> tra ve void xepLoai ()
    //sv.diemTrungBinh >8 <9 
    // strcpy(sv.hocLuc , "Xuat Sac"); --> Xuat Sac duoc gan vao ham hoc luc
}
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
    printf("\n Danh sach sinh vien theo lop: \n");
    printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
    for(int i=0; i<n; i++){
        if(strcmp (strupr(ds[i].maLop), strupr (lop)) == 0){
            inSinhVien(ds, n);
            printf("\n");
        }
    }
}
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
    for(int i=0; i<n; i++){
        if(strupr(ds[i].ten) == strupr(ten)){
            return 1;
        }
    }
    return 0;
}
void xoaSinhVienTheoId(SV ds[], int &n, int id){
    for(int i=0; i<n; i++){
        if(ds[i].id == id){
            for(int j=i; j<n; j++){//vi tri tim thay hien tai cua i -->  
                ds[j] = ds[j+1];
            } // doi lien tuc 1 2 3 4 5 6 --> xoa 3 --> ds 2 = ds 3  --> ds 3 = ds 4 --> ds 4 = ds 5
        }
        n -= 1;//giam xuong kich thuoc mang
        return;
    }
}
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ds[i].diemTrungBinh > ds[j].diemTrungBinh){
               SV temp;
               temp = ds[i];
               ds[i] = ds[j];
               ds[j] = temp;               
            }
        }
    }
}
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n ){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp (strupr (ds[i].ten), strupr (ds[j].ten) )< 0){  
               SV temp;
               temp = ds[i];
               ds[i] = ds[j];
               ds[j] = temp;           
            }
        }
    }
}
void nhapPhimBatKy(){
		printf("\nNhap phim bat ky de tiep tuc!");
        getch();
}
int main(){
    SV ds [100];
    int n;
    int chon;
    do{
        printf("\n\t\tMENU:");
        printf("\n1- Nhap danh sach sinh vien");
        printf("\n2- Xuat danh sach sinh vien");
        printf("\n3- Tim Max DTB");
        printf("\n4- Tim Min Tuoi");
        printf("\n5- Xuat danh sach sinh vien THEO LOP");
        printf("\n6- Xuat danh sach sinh vien THEO XEP LOAI");
        printf("\n7- Sap xep danh sach sinh vien THEO DTB");
        printf("\n8- Sap xep sach sinh vien THEO TEN")                                                                                                                                                                                                                                                                                                                                                                     ;
        printf("\n9- Tim sinh vien theo TEN");
        printf("\n10- Xoa sinh vien theo ID");
        printf("\n0- Thoat\n");
        //
        scanf("%d", &chon);
        //
        switch(chon){
            case 1:
                        nhapDanhSachSinhVien(ds, n);
                        nhapPhimBatKy();
                        break;
            case 2:
                        xuatDanhSachSinhVien(ds, n);
                        nhapPhimBatKy();
                        break;
            case 3:
                        printf("\nDiem trung binh max: %d", timMax_DiemTrungBinh(ds, n));
                        nhapPhimBatKy();
                        break;
            case 4:
                        printf("\nDiem trung binh max: %d", timMin_Tuoi(ds, n));
                        nhapPhimBatKy();
                        break;
            case 5:
                        char lop [20];
                        printf("\nNhap Ma Lop can hien thi: "); fflush(stdin); fgets(lop, sizeof(lop), stdin); xoaXuongDong(lop);
                        printf("\n");
                        xuatDanhSachSinhVienTheoLop(ds, n, lop);
                        nhapPhimBatKy();
                        break;
            case 6:
                        char xepLoai [20];
                        printf("\nNhap Xep Loai can hien thi: "); fflush(stdin); fgets(xepLoai, sizeof(xepLoai), stdin); xoaXuongDong(xepLoai);
                        printf("\n");
                        xuatDanhSachSinhVienXepLoai(ds, n, xepLoai);
                        nhapPhimBatKy();
                        break;
            case 7:
                        printf("\nDanh sach sinh vien theo DTB\n");
                        sapXepDanhSachSinhVienTheoDTB(ds, n);//in ra lai
                        xuatDanhSachSinhVien(ds, n);
                        nhapPhimBatKy();
                        break;
            case 8:
                        printf("\nDanh sach sinh vien theo Ten\n");
                        sapXepDanhSachSinhVienTheoTen(ds, n);
                        xuatDanhSachSinhVien(ds, n);
                        nhapPhimBatKy();
                        break;
            case 9:
                        char tensv [20];
                        printf("\nNhap ten can tim: "); fflush(stdin); fgets(tensv, sizeof(tensv), stdin); xoaXuongDong(tensv);
                        printf("\n");
                        timSinhVienTheoTen(ds, n, tensv);
                        nhapPhimBatKy();
                        break;
            case 10:
                        int id;
                        printf("\nNhap id can xoa: "); scanf("%d", &id);
                        xoaSinhVienTheoId(ds, n, id);
                        printf("\n");
                        printf("\nDanh sach cap nhap sau khi xoa: ");
                        xuatDanhSachSinhVien(ds, n);
                        nhapPhimBatKy();
                        break;
    
                }
        }while(n != 0);
}
