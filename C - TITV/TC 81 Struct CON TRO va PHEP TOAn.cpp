//Kieu struct va con tro va bai tap
//Struct quan ly cum 1; cum 2; cum 3
#include "stdio.h"
#include "math.h"
struct Phanso{
	int tuSo; 
	int mauSo;
};
int rutGon(Phanso *ps){//tra lai gia tri rutGon( ) 
//2/10 --> 1/5 --> USCLN chia ca 2
//-2/10 --> 01/5 --> USCLN la 2 --> Tu chia 2 va mau chia 2
	
	int a = ps->tuSo;
	int b = ps->mauSo;
	 
	a = abs(a);
	b = abs(b);
	int USCLN = 1;
	//TH1
	if(a==0 || b==0){// 0 5-- 0/5 5/5 --> USCLN = 5
		USCLN = (a+b);
	}else{
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;
	}
	ps->tuSo/=USCLN;
	ps->mauSo/=USCLN;	
}
//truyen phuong thuc con tro
void nhapPhanSo(Phanso *ps){//&d
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tuSo);//khac --> d.
	//nhap mau so nhung NEU gia tri ==0 thi yeu cau nhap lai
	do{
	printf("\nNhap vao mau so: ");
	scanf("%d", &ps->mauSo);
	}while(ps->mauSo==0);
}
//truyen tham tri --> cach viet ps.mauso
void inPhanSo(Phanso ps){
	//xu ly am duoi mau
	if(ps.mauSo<0){
		//1/-5 --> -1/5
		ps.tuSo*=-1;
		ps.mauSo*=-1;
	}
	//xu ly 2/10 --> 1/5
	rutGon(&ps);// ps --> ham dinh danh quan ly: dia chi bien va gia tri --> trong struct
	//in ket qua
	printf("%d/%d", ps.tuSo, ps.mauSo);
}
	Phanso ps1, ps2;
	printf("\nPhan so thu nhat: ");
	nhapPhanSo(&ps1);
	printf("\nPhan so vua nhap la: ");
	inPhanSo(ps1);
}
