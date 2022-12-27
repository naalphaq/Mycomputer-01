#include "stdio.h"
class SinhVien{
private: 
	char msv[30];
	char name[20];
	int tuoi;
public:
		SinhVien(){
			char msv [30] = "001";
			char name [20] = "Nguyen Van A";
			int tuoi = 1;
		}
		void noiChuyenTrongGio(){
			printf("Noi linh tinh");
		}
		void choiGame(){
			printf("choi game");
		}
		void xuat(){
			printf("Mssv %d Name %d Tuoi %d", msv, name, tuoi);
		}
};
int main(){
	SinhVien a;
	a.noiChuyenTrongGio();
	a.xuat();
	return 0;
}
