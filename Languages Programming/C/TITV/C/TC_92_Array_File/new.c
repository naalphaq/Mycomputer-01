#include <stdio.h>
#include <stdlib.h>
//tao file va ghi du lieu vao file
void nhapMang(int a[], int &n){
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
    }while(n<0 || n>100);
    for(int i=0; i<n; i++){
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}
void xuatFile(int a[], int n, char tenFile[100]){
    FILE* f;
    f = fopen(tenFile, "w");
    if(f==NULL){
        printf("\nloi mo file");
        exit(1);
    }
    fprintf(f, "%d\n", n);// gia tri n truoc

    for(int i=0; i<n; i++){
        fprintf(f, "%d\n", a[i]);
    }
    fclose(f);
}
int main(){
    int a[100];
    int n;
    nhapMang(a, n);
    xuatMang(a, n);
    xuatFile(a, n, "new");
}