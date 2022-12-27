#include <iostream>
#include <string>
using namespace std;
class SinhVien(){
private:
    string name;
    string msv;
    float grade;
public:
    void nhap();
    void xuat();
    //Ham tao va ham huy
    SinhVien();
    ~SinhVien ();
};
void SinhVien::nhap(){
    cout<<"\nNhap ho ten: ";
    getline(cin, name);
    cout<<"\nNhap ma sinh vien: ";
    getline(cin, msv);
    cout<<"\nNhap Diem: ";
    cin>>diem;
}
void SinhVien::xuat(){
    cout<<"\nHo ten: "<<hoten;
    cout<<"\nMa sinh vien: "<<msv;
    cout<<"\nDiem: "<<diem;
}
SinhVien::SinhVien();
SinhVien::~SinhVien();

}
int main()
{
    SinhVien nguyenvana;
    nguyenvana.hoten;
    return 0;
}
