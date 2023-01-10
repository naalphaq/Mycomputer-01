#include <stdio.h>
void swap(int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}
int main(){
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    //Nhap Mang
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    // Sap xep dung thuat toan sap xep chon
    for(int i = 0; i < n - 1; i++){
        int vitriMax = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[vitriMax]){//nho toi lon a[j] nho hon hoan doi
                // Hoan vi 2 vi tri
                vitriMax = j;   
            }
        }
        swap(a[i], a[vitriMax]);
    }
    
    //Sap xep lai
    
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    
    
}