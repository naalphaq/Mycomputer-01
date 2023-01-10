#include "stdio.h"
#include "stdlib.h"
//Trung binh cong cac phan tu trong mang
float trungbinhCong(int *arr, int n){
	int tong=0, tbc=0;
	for(int i=0; i<n; i++){
		tong+=*(arr+i);
	}
	tbc=tong/n;
	return tbc;
}
float trungbinhCongsoduong(int *arr, int n){
	float tong=0, tbc=0;
	int ptuduong=0;
	for(int i=0; i<n; i++){
		if(*(arr+i)>0){
			tong+=*(arr+i);
			ptuduong++;
		}	
	}
	tbc=tong/ptuduong;
	return ptuduong>0?tbc:-1;//ptuduong dem duoc 1 so duong thi tbc nguoc lai -1 (k co)
}
int main(){
	int n;
	do{
		printf("Nhap phan tu n (0<n<100) = ");
		scanf("%d", &n);
	}while(n<0 || n>100);
	//
    int* arr = (int*)malloc(n*sizeof(int));
    //
    if(arr == NULL){
        printf("\nNo to meet the memory");
        exit(0);
    }
    //Function_Creat_Array
	for(int i=0; i<n; i++){
		printf("\narr[%d] = ", i);
		scanf("%d", arr+i);
	}
    //Result
	printf("\nGia tri trung binh cong: %.2f",trungbinhCong(arr, n));//Luu y: %.2f
	float tbcsd = trungbinhCongsoduong(arr, n);
	
	if (tbcsd<0){
		printf("\nKhong co so duong nao");
	}else{
		printf("\nGia tri trung binh cong Duong: %.2f", tbcsd);//Luu y: %.2f
	}
    //release 
    free(arr);
}
