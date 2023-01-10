#include <stdio.h>
#include <stdlib.h>
void inArray(int *arr, int n){
    for(int i=0; i<n; i++){
    printf("\narr[%d] = ", i);
    scanf("%d", arr+i);
    }
}
void outArray(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("\t%d", *(arr+i));
    }
}
void reverArray(int *arr, int n){//0 1 2 3 4 --> n=5
    for(int i=0; i<n/2; i++){
        int temp = *(arr+i);
        *(arr+i) = *(arr-i-1);//*(arr+0) = 0 --> *(arr-i-1)
        *(arr-i-1) = temp;
    }
}
int main(){
    int n;  
    do{
        printf("\nNhap phan tu: ");
        scanf("%d", &n);
    }while(n<0);
    //
    int* arr = (int*)malloc(n*sizeof(int));
    //
    if(arr == NULL){
        printf("No to meet the memory for the project");
        exit(0);
    }
    //function 01
    inArray(arr, n);
    outArray(arr, n);
    //function 02
    reverArray(arr,n);
    printf("\n");
    outArray(arr, n);  
    //
    free(arr);
}
