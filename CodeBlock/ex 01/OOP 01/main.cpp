#include <iostream>
#include <string>
using namespace std;
class SinhVien{
private:
    string hoten;
    string msv;
    float  toan;
    float  ly;
public:
    void nhap();
    void xuat();
};
void SinhVien::nhap(){
    fflush(stdin);
    cout<<"Nhap Ho va ten: ";
    getline(cin, hoten);

    fflush(stdin);
    cout<<"Nhap ma so sinh vien: ";
    getline(cin, msv);

    cout<<"Nhap diem toan: ";
    cin>>toan;
    cout<<"Nhap diem ly: ";
    cin>>ly;
}
void SinhVien::xuat(){
    cout<<"\nHo va ten: "<<hoten;
    cout<<"\nMa sinh vien: "<<msv;
    cout<<"\nDiem toan: "<<toan;
    cout<<"\nDiem ly: "<<ly;
}
int main()
{
    SinhVien *x = new SinhVien;//Cap phat bo nho
    x->xuat();
    x->nhap();
    delete x;
    cout<<"\nKich thuoc: "<<sizeof(x)<<" byte";
    system("pause");
    return 0;
/*
    SinhVien x;
    x.xuat();
    x.nhap();
    cout<<"\nKich thuoc: "<<sizeof(x)<<" byte";
*/
}
