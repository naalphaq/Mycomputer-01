#include <stdio.h>
int a1[100], a2[100], a3[100];
int n1, n2, n3;

void inArray(int x[100], int &n){
    printf("\nNhap phan tu n: ");
    scanf("%d", &n);
    for(int i=0; i<n1; i++){
        printf("\na[%d] = ", i);
        scanf("%d", &x[i]);
    }
}
void outArray(int x[100], int &n){
   for(int i=0; i<n; i++){
        printf("%d\t", x[i] );
    } 
}
void sepeArray(int a1[100], int &n1, int a2[100], int &n_2,int a3[100],int &n_3){
    int i2 = 0, n_2 = 0;
    int i3 = 0, n_3 = 0;
    for(int i=0; i<n1; i++){
        if(a1[i]%2==0){
            a1[i] = a2[i2];
            i2++;
            n_2++;
        }else{
            a1[i] = a3 [i3];
            i3++;
            n_3++;
        }
    }
 }
int main(){
    inArray(a1, n1);
    outArray(a1, n1);
    sepeArray(a1, n1, a2, n2, a3, n3);
    outArray(a2, n2);
    outArray(a3, n3);
}