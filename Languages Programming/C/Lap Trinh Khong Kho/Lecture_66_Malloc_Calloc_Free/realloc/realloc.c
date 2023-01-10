#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do{
        printf("\nNhap n phan tu: ");
        scanf("%d", &n);
    }while(n<0);
    //calloc
    int* ptrn = (int*)calloc(n, sizeof(int));
    //check calloc
    if(ptrn == NULL){
        printf("\nKhong the cap phat bo nho dong calloc");
        exit(0);
    }
    //Functions
    for(int i = 0; i < n; i++){
        printf("\na[%d] = ", i);
        scanf("%d", ptrn+i );
    }
    //xuatMang
    for(int i = 0; i < n; i ++){
        printf("%d\t", *(ptrn+i));
    }
    //add bo nho dong
    int x; 
    printf("\nThay doi kich thuoc Mang thanh: ");
    scanf("%d", &x);
    realloc(ptrn, x);
    // xuatMang sau khi add them bo nho
    for(int i = 0; i < x; i ++){// i <x
        printf("%d\t", *(ptrn+i));
    }
    //giai phong
    free(ptrn);

}