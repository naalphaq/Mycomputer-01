#include <iostream>
#include <string>
//Dong goi Getter va Setter
using namespace std;
class SinhVien{
private:
    string name;
    string msv;
    float diem;
public:
    void nhap();
    void xuat();
//Ham tao va ham huy
    SinhVien();
    ~SinhVien();
//Dong goi Getter and Setter
string Getter_name(){//Getter tra ve kieu du lieu //Sai kieu du lieu name --> string dung void sai
    return name;
}
void Setter_name(string HOTEN){//Gan du lieu ngoai vao nen khai bao ben trong
    name = HOTEN;
}
};
void SinhVien::nhap(){//Nhap thuoc class SinhVien
    cout<<"\nNhap Ho va Ten: ";
    fflush(stdin);
    getline(cin, name);
    cout<<"\nNhap Ma sinh vien: ";
    fflush(stdin);
    getline(cin, msv);
    cout<<"\nNhap Diem: ";
    cin>>diem;
}
void SinhVien::xuat(){
    cout<<"\n____________________________\n";
    cout<<"\nHo va Ten: "<<name;
    cout<<"\nMa sinh vien: "<<msv;
    cout<<"\nDiem: "<<diem;
    cout<<"\n";
}
SinhVien::SinhVien(){}
SinhVien::~SinhVien(){}
int main()
{
    SinhVien *x = new SinhVien;
    x->nhap();
    x->Setter_name("Nguyen Van B");
    x->xuat();
    system("pause");
    return 0;
}
