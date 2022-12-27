#include "stdio.h"
#include "string.h"
class SinhVien{
private: 
	char hoten[30];
	char msv[10];
	int diem;
public:
	void nhap();
	void xuat();
};
void SinhVien::nhap(){
	printf("\nNhap ho ten: ");
	fgets (hoten, sizeof(hoten), stdin);
	printf("\nNhap ma sinh vien: ");
	fgets (msv, sizeof(msv), stdin);
	printf("\nNhap diem: ");
	scanf("%f", diem);
}
void SinhVien::xuat(){
//	printf("\n_____________________\n");
//	printf("Ho ten: ");
//	puts(hoten);
//	printf("\nMa sinh vien: ");
//	puts(msv);
	printf("\nDiem: %d", diem);
}
int main(){
	SinhVien nguyenvana;
	nguyenvana.nhap();
	nguyenvana.xuat();
	return 0;
}
