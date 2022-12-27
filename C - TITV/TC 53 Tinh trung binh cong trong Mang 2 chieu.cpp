#include "stdio.h"
int a[100][100];
int m, n;

void nhapMang2chieu(int x[100][100], int &m, int &n){
	do{
		printf("Nhap so hang m va so cot n: ");
		scanf("%d%d", &m, &n);
	}while(m<0 || n<0);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("\na[%d][%d] = ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatMang2chieu(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
}
//Trung binh cong cua mang 2 chieu: cong tong tat ca ptu roi chia cho slpt co trong mang 1 2 3 4 5 
//Kieu du lieu = tbc
double trungbinhcong2chieu(int x[100][100], int m, int n){
	//tbc=tong/slpt	
	double tbc=0;
	double tong=0;
	double slpt=m*n;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
		tong+=x[i][j];
		}	
	}
	tbc = (double)tong/slpt;//ep kieu lai
	return tbc;
}
//Trung binh cong cua cac ptu trong mang chia het cho 5  --> 1 5 2 10 3 --> tbc = tong/slpt --> tong = 5+10 = 15 slpt = 2 --> tbc = 15/2 = 7.5
double trungbinhcongptchiahet5(int x[100][100], int m, int n){
	//tbc=tong/slpt	
	double tbc=0;
	double tong=0;
	double slpt=0; //dem
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]%5==0){
			tong+=x[i][j];
			slpt++;//dung + len 1 --> hoan thanh tat ca vong lap --> tra gtri ra ngoai vong lap duoc luu slpt
			}
		}	
	}
	tbc = (double)tong/slpt;//ep kieu lai
	return tbc;
}
int main(){
	nhapMang2chieu(a, m, n);
	xuatMang2chieu(a, m, n);
	printf("Trung binh cong mang 2 chieu: %.2f", trungbinhcong2chieu(a, m, n));
	printf("\n------");
	printf("Trung binh cong ptu chia het cho 5: %.2f", trungbinhcongptchiahet5(a, m, n));
	
}
