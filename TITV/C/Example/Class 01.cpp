#include "stdio.h"
#include "string.h"
class SinhVien{
private: 
	char msv[30];
	char name[20];
	int tuoi;
	int diem;
public:
	void NHAP(){
		printf("Nhap thong tin\n");
		printf("NHAP MSV:\n");
		fgets(msv, sizeof(msv), stdin);
		
		printf("Nhap ho ten\n");
		fgets(name, sizeof(name), stdin);
		
		printf("Nhap tuoi:\n");
		scanf("%d", tuoi);
		printf("Nhap diem: \n");
		scanf("%d", diem);
	}
	void XUAT(){
		printf("MSSV:");
		puts(msv);
		printf("\nHO TEN:");
		puts(name);
		printf("\nTuoi: %d", tuoi);
		printf("\nDiem: %d", diem);
	}
};
int main(){
	SinhVien a;
	a.NHAP();
	a.XUAT();
}
