#include <stdio.h>
int main(){
    int n;
    //do{}while();
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
    }while(n<0);
    //nhap: 
    //if() goto nhap;
    int m;
    nhap:
        printf("\nNhap m: ");
        scanf("%d", &m);
    if(m<0) goto nhap;

    //Xuat Day so le
    printf("\nDay so le: ");
    for(int i=0; i<n; i++){
        if(i%2==0) continue;
        printf("%d\t", i);
    }
}