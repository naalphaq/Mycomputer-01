#include <iostream>
#include <string>
using namespace std;
class SinhVien{
private:
    string hoten;
    string msv;
    float diem;
public:
    void nhap();
    void xuat();
    //Ham tao va ham huy
    SinhVien();
    ~SinhVien();
    //Getter va setter
    string Getter_Hoten(){
    return hoten;
    }
    //setter ho ten thay doi du lieu
    void Setter_Hoten(string HOTEN){
    hoten=HOTEN;
    }
};
void SinhVien::nhap(){
    cout<<"\nNhap ho ten: ";
    getline(cin, hoten);
    cout<<"\nNhap ma sinh vien: ";
    getline(cin, msv);
    cout<<"\nNhap diem:";
    cin>>diem;
}
void SinhVien::xuat(){
    cout<<"\n____________";
    cout<<"\nHo ten: "<<hoten;
    cout<<"\nMa sinh vien: "<<msv;
    cout<<"\nDiem:"<<diem;
}
SinhVien::SinhVien(){}
SinhVien::~SinhVien(){}
int main()
{
    SinhVien nguyenvana;
    nguyenvana.nhap();
    nguyenvana.Setter_Hoten("Nguyen Van B");//
    nguyenvana.xuat();
    return 0;
}
