#include <stdio.h>

typedef struct HocSinh{
    char ten[30];
    float diem;
}HS;
//Ham nhap thong tin, tra ve 1 struct (nhap du lieu vao array)
//HS kieu du lieu tra ve 
HS nhap(){
    HS x;//kieu du lieu HS khai bao bien x --> dung thoi
    gets(x.ten);
    scanf("%f", &x.diem);
    return x;//Nhap vao thi tra lai du lieu cho struct HocSinh
}
void in(HS a){
    printf("%s %.2f", a.ten, a.diem);
}
int main(){
    HS a = nhap();//Kieu du lieu Struct co hoc sinh a bay gio muon nhap vao;
    in(a);//in ra hoc sinh a thi phai truyen du lieu dau vao cho function
    return 0;
}