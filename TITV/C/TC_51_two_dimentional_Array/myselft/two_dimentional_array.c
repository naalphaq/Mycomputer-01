#include <stdio.h>
int a[100][100];
int m, n;

int inArray(int a[100][100], int &m, int &n){
    do{
        printf("\nNhap so hang m va cot n: ");
        scanf("%d%d", &m, &n);
    }while(m<0 || n<0);
    //
    for(int i= 0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("\na[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
int outArray(int a[100][100], int &m, int &n){
    for(int i= 0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
	}
}
int main(){
    inArray(a, m, n);
    outArray(a, m, n);
}