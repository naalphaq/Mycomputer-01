#include "stdio.h"
#include "math.h"

int soNgaycuathang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam%400==0)||(nam%4==0 && nam%100 !=0))?29:28;
	default:
		return -1; // Ngung chuong trinh vi nhap sai
	}
}
int ngayTrongnam(int ngay, int thang, int nam){
	int ntn = 0;
	for (int i=1; i<thang; i++){
		ntn+=soNgaycuathang(i, nam);
	}
	ntn+=ngay;
	return ntn;
}
int ngayTruocdo(int ngay, int thang, int nam){
	if(ngay==1){//1.1.2020 --> 31.12.2019
		if (thang==1){
			nam --; 
			thang = 12;
			ngay = 31;
		}else{
			thang--;
			ngay=soNgaycuathang(thang, nam);
		}
	}else {//3.1.2020
		ngay--;
	}
	printf("\nNgay truoc do: %d/%d/%d", ngay, thang, nam);
}
int ngayKetiep(int ngay, int thang, int nam){
	if(ngay==31&&thang==12){
		ngay=1;
		thang=1;
		nam++;
	}else{
		if(ngay==soNgaycuathang(thang,nam)){
			ngay=1;
			thang++;
		}else{
			ngay++;
		}
	}
	printf("\nNgay ke tiep: %d/%d/%d", ngay, thang, nam);
}
int main(){
	int ngay, thang, nam;
	do{
	printf("Nhap du lieu ngay, thang, nam:");
	scanf("%d%d%d", &ngay, &thang, &nam);
	}	
	while(ngay<1 || ngay>31 || thang<1 || thang>12 || nam <1)
	printf("\nSo luong ngay cua thang: %d", soNgaycuathang(thang, nam));
	printf("\nNgay thu: %d", ngayTrongnam(ngay, thang, nam));
	ngayTruocdo(ngay, thang, nam);//call the result from the function of ngayTruocdo;
	ngayKetiep(ngay, thang, nam);
}
