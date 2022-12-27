#include <iostream>
//Truu Tuong
//Dong Goi
//Ke thua --> protected
//Da hinh --> Virtual
#include <string>
using namespace std;
class NhanVien{
protected:
    string hoten;
    int tuoi;
    string gioitinh;
    int sdt;
    string diachi;
    int chieucao;
    int cannang;
public:
    void input(){
    cout<<"\nNhap ho va ten: ";
    fflush(stdin);
    getline(cin, hoten);
    cout<<"\nNhap tuoi: ";
    cin>>tuoi;
    cout<<"\nNhap gioi tinh: ";
    fflush(stdin);
    getline(cin, gioitinh);
    cout<<"\nNhap so dien thoai: ";
    cin>>sdt;
    cout<<"\nNhap dia chi: ";
    fflush(stdin);
    getline(cin, diachi);
    cout<<"\nNhap chieu cao: ";
    cin>>chieucao;
    cout<<"\nNhap can nang: ";
    cin>>cannang;
    }
    void output(){
        cout<<"\n\n\t\t__________________________\n";
    cout<<"\nHo va ten: "<<hoten;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nGioi tinh: "<<gioitinh;
    cout<<"\nSo dien thoai: "<<sdt;
    cout<<"\nDia chi: "<<diachi;
    cout<<"\nChieu cao: "<<chieucao;
    cout<<"\nCan nang: "<<cannang;
    }
};
class sua_ong_nuoc : public NhanVien{
private:
    int sogio;
public:
    void input(){
    NhanVien::input();
    cout<<"\nNhap so gio: ";
    cin>>sogio;
    }
    void output(){
    NhanVien::output();
    cout<<"\nSo gio: "<<sogio;
    cout<<"\nTien luong: "<<tien_sua_ong_nuoc();
    }
    double tien_sua_ong_nuoc(){
    return sogio*50000;
    }
};

class giao_hang : public NhanVien{
private:
    int donhang;
public:
    void input(){
    NhanVien::input();
    cout<<"\nNhap so luong don hang: ";
    cin>>donhang;
    }
    void output(){
    NhanVien::output();
    cout<<"\nSo luong don hang: "<<donhang;
    cout<<"\nTien luong: "<<tien_giao_hang();
    }

    double tien_giao_hang(){
    return donhang*33500;
    }
};
class xe_grab : public NhanVien{
private:
    int km;
public:
    void input(){
    NhanVien::input();
    cout<<"\nNhap so km: ";
    cin>>km;
    }
    void output(){
    NhanVien::output();
    cout<<"\nSo km: "<<km;
    cout<<"\nTien luong: "<<tien_xe_grab();
    }
    double tien_xe_grab(){
    return km*10000;
    }
};
//ham tinh tong tat ca nhan vien sua ong nuoc ds_suaongnuoc()
double Tong_ds_suaongnuoc(sua_ong_nuoc ds_suaongnuoc[], int m){
        double sum = 0;
        for(int i=0; i<m; i++){
        sum+=ds_suaongnuoc[i].tien_sua_ong_nuoc();
        }
    return sum;
    }
//ham tinh tong tat ca nhan vien sua ong nuoc ds_giaohang()
double Tong_ds_giaohang(giao_hang ds_giaohang[], int n){
        double sum = 0;
        for(int i=0; i<n; i++){
        sum+=ds_giaohang[i].tien_giao_hang();
        }
    return sum;
    }
//ham tinh tong tat ca nhan vien sua ong nuoc ds_chaygrab()
double Tong_ds_xegrab(xe_grab ds_xegrab[], int l){
        double sum = 0;
        for(int i=0; i<l; i++){
        sum+=ds_xegrab[i].tien_xe_grab();
        }
    return sum;
    }
void menu(sua_ong_nuoc ds_suaongnuoc[], giao_hang ds_giaohang[], xe_grab ds_xegrab[], int m, int n, int l ){
    int luachon;
    while (true){
    system("cls");//Xoa du lieu nhap truoc do
    cout<<"\n\n\t\t=======CHUONG TRINH QUAN LY ======";
    cout<<"\n1.Nhap thong tin nhan vien SUA ONG NUOC";
    cout<<"\n2.Nhap thong tin nhan vien GIAO HANG";
    cout<<"\n3.Nhap thong tin nhan vien XE GRAB";
    cout<<"\n4.Xuat thong tin nhan vien SUA ONG NUOC";
    cout<<"\n5.Xuat thong tin nhan vien GIAO HANG";
    cout<<"\n6.Xuat thong tin nhan vien XE GRAB";
    cout<<"\n7.Xuat thong tin TONG TIEN TAT CA NHAN VIEN";
    cout<<"\n0.Ket thuc";
    cout<<"\n\n\t\t========END======================";

    cout<<"\nNhap lua chon:";
    cin>>luachon;
    if(luachon<1 || luachon>7){
        cout<<"\n\t LUA CHON KHONG TON TAI XIN KIEM TRA LAI";
    }
    if(luachon == 0){
        break;
    }
    else if(luachon==1){
    sua_ong_nuoc nv_suaongnuoc ;
    cout<<"\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC";
    nv_suaongnuoc.input();
    cout<<"\n\n\t\t XUAT THONG TIN NHAN VIEN SUA ONG NUOC";
    //them doi tuong gia tri nv_suaong nuoc vao danh sach "ds_suaongnuoc"
    ds_suaongnuoc[m] = nv_suaongnuoc;
    m++;
    }
    else if(luachon==2){
    giao_hang nv_giao_hang;//string x1; string x2; string x3 -> ds[n]={x1, x2,..};//ds[0] = x
    cout<<"\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG";
    nv_giao_hang.input();
    cout<<"\n\n\t\t XUAT THONG TIN NHAN VIEN GIAO HANG";
    //them doi tuong gia tri nv_suaong nuoc vao danh sach "ds_suaongnuoc"
    ds_giaohang[n] = nv_giao_hang;
    n++;
    }
    else if(luachon==3){
    xe_grab nv_xegrab;
    cout<<"\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC";
    nv_xegrab.input();
    cout<<"\n\n\t\t XUAT THONG TIN NHAN VIEN SUA ONG NUOC";
    //them doi tuong gia tri nv_suaong nuoc vao danh sach "ds_suaongnuoc"
    ds_xegrab[l] = nv_xegrab;
    l++;
    }
    else if(luachon==4){
        cout<<"\n\n\t\t DANH SANG NHAN VIEN SUA ONG NUOC\n";
        for(int i=0; i<m; i++){
            cout<<"\n\n\t\tNhan vien Sua Ong Nuoc "<<i+1;
            ds_suaongnuoc[i].output();
        }
        cout<<"\n\n\t\t TONG TIEN LUONG: "<<(size_t)Tong_ds_suaongnuoc(ds_suaongnuoc, m)<<"\n";
        system("pause");
    }
    else if(luachon==5){
        cout<<"\n\n\t\t DANH SANG NHAN VIEN GIAO HANG\n";
        for(int i=0; i<n; i++){
            cout<<"\n\n\t\tNhan vien Giao Hang "<<i+1;
            ds_giaohang[i].output();
        }
        cout<<"\n\n\t\t TONG TIEN LUONG: "<<(size_t)Tong_ds_giaohang(ds_giaohang, n)<<"\n";
        system("pause");
    }
    else if(luachon==6){
        cout<<"\n\n\t\t DANH SANG NHAN VIEN XE GRAB\n";
        for(int i=0; i<l; i++){
            cout<<"\n\n\t\tNhan vien Xe Grab "<<i+1;
            ds_xegrab[i].output();
        }
        cout<<"\n\n\t\t TONG TIEN LUONG: "<<(size_t)Tong_ds_xegrab(ds_xegrab, l)<<"\n";
        system("pause");
    }
    else if(luachon==7){
        cout<<"\n\n\t\t TONG TIN TAT CA NHAN VIEN: "<<(size_t)Tong_ds_suaongnuoc(ds_suaongnuoc, m) + Tong_ds_giaohang(ds_giaohang, n) + Tong_ds_xegrab(ds_xegrab, l)<<"\n";
        system("pause");
    }
}
}
int main()
{
    sua_ong_nuoc ds_suaongnuoc[100];
    giao_hang ds_giaohang [100];
    xe_grab ds_xegrab [100];
    int m = 0;
    int n = 0;
    int l = 0;
    menu(ds_suaongnuoc, ds_giaohang, ds_xegrab, m, n, l);
    system("pause");
    return 0;
}
