#include<stdio.h>
#include<stdlib.h>

// C1
// struct ngaySinh{
//     int ngay;
//     int thang;
//     int nam;
// };

typedef struct nhanVien{
    char manv[10];
    char hoten[30];
    int tuoi;
    // C2
    // struct ngaysinh ns;
    struct ngaysinh{
        int ngay;
        int thang;
        int nam;
    }ns;
}nv;

int main(){
    nv nv1, nv2;
    printf("Nhap du lieu cho nhan vien 1: \n");

    printf("Nhap ma nhan vien: ");fflush(stdin);
    gets(nv1.manv);//vi tren string nen dung gets nhap du lieu k can dau cach
    printf("Nhap ho ten nhan vien: ");fflush(stdin);
    gets(nv1.hoten);
    //ngay thang nam sinh la int --> dung scanf
    printf("Nhap tuoi: ");fflush(stdin);
    scanf("%d", &nv1.tuoi);
    printf("Nhap ngay sinh: "); fflush(stdin);
    scanf("%d/%d/%d", &nv1.ns.ngay, &nv1.ns.thang, &nv1.ns.nam);

    printf("Nhap ma nhan vien: ");fflush(stdin);
    gets(nv2.manv);
    printf("Nhap ho ten nhan vien: "); fflush(stdin);
    gets(nv2.hoten);
    printf("Nhap tuoi: ");fflush(stdin);
    scanf("%d", &nv2.tuoi);
    printf("Nhap ngay sinh: "); fflush(stdin);
    scanf("%d/%d/%d", &nv2.ns.ngay, &nv2.ns.thang, &nv2.ns.nam);
     
    //in thong tin
    printf("\n--------THONG TIN NHAN VIEN-------------\n");
    printf("\n");
    printf("%-20s %-20s %-10s %-10s\n", "Ma Nhan Vien", "Ho ten", "Tuoi", "Ngay sinh");
    printf("%-20s %-20s %-10d %02d/%02d/%4d\n", nv1.manv, nv1.hoten, nv1.tuoi, nv1.ns.ngay, nv1.ns.thang, nv1.ns.nam);
    printf("%-20s %-20s %-10d %02d/%02d/%4d\n", nv2.manv, nv2.hoten, nv2.tuoi, nv2.ns.ngay, nv2.ns.thang, nv2.ns.nam);
    return 0;
}