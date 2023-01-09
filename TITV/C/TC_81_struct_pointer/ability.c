#include <stdio.h>
#include <stdlib.h>
struct phanSo{
    int tuso;
    int mauso;
};
void nhapSo(phanSo *ps){
    printf("\nNhap tu so: ");
    scanf("%d", &ps->tuso);
    do{
        printf("\nNhap mau so: ");
        scanf("%d", &ps->mauso);
    }while(ps->mauso ==0);
}
void rutgon(phanSo *ps){
    int a = ps->tuso;
    int b = ps->mauso;

    a = abs(a);
    b = abs(b);

    int UCLN = 1;
    if(a == 0 || b ==0 ){
        UCLN  = (a+b);
    }else{
        while(a!=b){
            if(a>b){
                a = a-b;
            }else{
                b = b-a;
            }
        }
        UCLN = a;
    }
    ps->tuso /= UCLN;
    ps->mauso /= UCLN;
}
void inSo(phanSo ps){
    if(ps.mauso < 0){
        ps.tuso *= -1;
        ps.mauso *= -1;
    }
    //
    rutgon(&ps);
    //
    if(ps.mauso == 1){
        printf("\n%d", ps.tuso);
    }else{
    printf("\n%d/%d\t", ps.tuso, ps.mauso);
    }
}
int main(){
    phanSo ps1, ps2;
    nhapSo(&ps1);
    nhapSo(&ps2);
    inSo(ps1);
    inSo(ps2);
}