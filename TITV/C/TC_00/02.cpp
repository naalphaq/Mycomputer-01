#include "stdio.h"
class SinhVien{
private: 
	char msv[30];
	char name[20];
	int tuoi;
	int diem;
public:
	SinhVien(){
		char msv[30] = "01";
		char name[20] = "Nguyen Van A";
		int tuoi = 1;
		int diem = 10;
	}
	void XUAT(){
		printf("MSV: %s - HO TEN: %s - TUOI: %d - DIEM: %d", msv, name, tuoi, diem);
	}
};
int main(){
	SinhVien a;
	a.XUAT();
}
