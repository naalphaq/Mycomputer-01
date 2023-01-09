#include <stdio.h>
int a[100][100];
int m, n;
void inArray(int a[100][100], int &m, int &n){
    do{    
    printf("\nNhap m va n: ");
    scanf("%d%d", &m, &n);
    }while (m <0 || n<0);

    for(int i=0; i<m; i++){
        for(int j=0; j<n;  j++){
            printf("\na[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void outArray(int a[100][100], int &m, int &n){
    printf("Mang 2 chieu:\n ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

bool checkFindValue(int a[100][100], int &m, int &n, int &tk){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(a[i][j]==tk) {
            return true;
           }
        }   
    }
    return false;
}

void findValue(int a[100][100], int &m, int &n){
    int luachon = 0;
    do{ 
        int tk;
        printf("Nhap gia tri tim kiem: ");
        scanf("%d", &tk);

        if(checkFindValue(a, m, n, tk)){
            printf("\nValue %d co trong mang 2 chieu a[%d][%d] ", tk, m, n);
        }else{
            printf("\nKHONG ton tai");
        }

        printf("\n\t\tNhap 1 so bat ky de tiep tuc tim kiem va nhap 0 thoat: ");
        scanf("%d", &luachon);

    }while(luachon != 0);
}

int main(){
    inArray(a, m, n);
    outArray(a, m, n);
    findValue(a, m, n);
}