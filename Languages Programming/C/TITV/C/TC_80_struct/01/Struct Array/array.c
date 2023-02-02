#include<stdio.h>
#include<stdlib.h>
struct nhanVien{
    char manv[10];
    char hoten[30];
    char diachi[50];
    struct ngaysinh{
        int ngay;
        int thang;
        int nam;
    }ns;
};

int main(){
    int n;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    //Mang va Con tro
    // struct nhanVien nv[n];

    //Con tro kieu cau truc --> cap phat bo nho
    struct nhanVien *nv = (struct nhanVien *) malloc(n * sizeof(struct nhanVien));

    for(int i=0; i<n; i++){
    printf("Nhap du lieu cho nhan vien %d: \n", i+1);
    printf("Nhap ma nhan vien: ");fflush(stdin);
    gets(nv[i].manv);
    printf("Nhap ho ten nhan vien: ");fflush(stdin);
    gets(nv[i].hoten);
    printf("Nhap dia chi: ");fflush(stdin);
    gets(nv[i].diachi);
    printf("Nhap ngay sinh: "); fflush(stdin);
    scanf("%d/%d/%d", &nv[i].ns.ngay, &nv[i].ns.thang, &nv[i].ns.nam);
    }



    // printf("Nhap du lieu cho nhan vien 1: \n");
    // printf("Nhap ma nhan vien: ");fflush(stdin);
    // gets(nv1.manv);//vi tren string nen dung gets nhap du lieu k can dau cach
    // printf("Nhap ho ten nhan vien: ");fflush(stdin);
    // gets(nv1.hoten);
    // //ngay thang nam sinh la int --> dung scanf
    // printf("Nhap tuoi: ");fflush(stdin);
    // scanf("%d", &nv1.tuoi);
    // printf("Nhap ngay sinh: "); fflush(stdin);
    // scanf("%d/%d/%d", &nv1.ns.ngay, &nv1.ns.thang, &nv1.ns.nam);

    // printf("Nhap ma nhan vien: ");fflush(stdin);
    // gets(nv2.manv);
    // printf("Nhap ho ten nhan vien: "); fflush(stdin);
    // gets(nv2.hoten);
    // printf("Nhap tuoi: ");fflush(stdin);
    // scanf("%d", &nv2.tuoi);
    // printf("Nhap ngay sinh: "); fflush(stdin);
    // scanf("%d/%d/%d", &nv2.ns.ngay, &nv2.ns.thang, &nv2.ns.nam);
     
    //in thong tin
    printf("\n--------THONG TIN NHAN VIEN-------------\n");
    printf("%-20s %-25s %-20s %-10s\n", "Ma Nhan Vien", "Ho ten", "Tuoi", "Ngay sinh");
    for(int i = 0; i<n; i++ ){
        printf("%-20s %-25s %-20s %02d/%02d/%4d\n", nv[i].manv, nv[i].hoten, nv[i].diachi, nv[i].ns.ngay, nv[i].ns.thang, nv[i].ns.nam);
    }


    // printf("%-20s %-20s %-10s %-10s\n", "Ma Nhan Vien", "Ho ten", "Tuoi", "Ngay sinh");
    // printf("%-20s %-20s %-10d %02d/%02d/%4d\n", nv1.manv, nv1.hoten, nv1.tuoi, nv1.ns.ngay, nv1.ns.thang, nv1.ns.nam);
    // printf("%-20s %-20s %-10d %02d/%02d/%4d\n", nv2.manv, nv2.hoten, nv2.tuoi, nv2.ns.ngay, nv2.ns.thang, nv2.ns.nam);
    return 0;
}