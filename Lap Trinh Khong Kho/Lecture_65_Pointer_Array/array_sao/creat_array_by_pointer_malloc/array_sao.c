#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do {
        printf("\nNhap vao n phan tu:");
        scanf("%d", &n);
    }while(n<0);
    //
    int* ptr = (int*)malloc(n*sizeof(int));
    //
    if(ptr == NULL){
        printf("Khong the cap phat bo nho");
        exit(0);
    }
    //functions
    printf("\nNhap mang: ");
    for(int i = 0; i<n; i++){
        printf("\narr[%d] = ", i );
        scanf("%d", (ptr+i));
    }
    printf("\nXuat mang: ");
    for(int i = 0; i<n; i++){
        printf("\n%d", *(ptr+i));
    }
    //
    free(ptr);

}