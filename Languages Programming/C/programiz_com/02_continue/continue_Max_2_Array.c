#include "stdio.h"
#include "limits.h"
int a[100];
int n;

void nhapMang(int x[100], int &n ){
	printf("Nhap phan tu n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
	printf("a[%d] = ", i);
	scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\nGia tri cua mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int timMinThuHai(int x[100], int n){
	int min = INT_MAX; //min = x[0];
	int min_2  = INT_MAX;
	//min thu 1
	 for(int i=0; i<n; i++){	
	 	if(x[i]<min){
	 	min = x[i];//Neu min la nho nhat thi tim gi nua sau gan gia tri de so sanh
	 	}
	 } 
	 //min thu 2 -> bo min dau ra khoi mang roi moi tiep tuc thuc hien lay min thu 2
	 for(int i=0; i<n; i++){
	 	if(x[i]==min) {
	 		continue;//Dung bo qua tang i len 1 don vi
		 } else{
			if(x[i]<min_2){
				min_2=x[i];
			}
		 }
	 }  
	 return min_2;
}

int timMaxThuHai(int x[100], int n){
	int max = INT_MIN; //min = x[0];
	int max_2  = INT_MIN;
	//min thu 1
	 for(int i=0; i<n; i++){	
	 	if(x[i]>max){
	 	max = x[i];
	 	}
	 } 
	 //max x[i]>max --> max=x[i]
	 for(int i=0; i<n; i++){
	 	if(x[i]==max) {
	 		continue;//Dung bo qua tang i len 1 don vi
		 } else{
			if(x[i]>max_2){
				max_2=x[i];
			}
		 }
	 }  
	 return max_2;
}
int main(){
	nhapMang(a, n);//void ()
	xuatMang(a, n);//void ()
	printf("\nGia tri min thu 2: %d ", timMinThuHai(a, n)); // int return tra ve gia tri bo vao dau %
	printf("\nGia tri max thu 2: %d ", timMaxThuHai(a, n));
}


