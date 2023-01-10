#include <stdio.h>
#include <stdlib.h>
void inArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", arr + i);
    }
}
bool checkfindValue(int *arr, int n, int &v){
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == v)
        {
           return true;
        }
    }
    return false;
}
void findValue(int *arr, int n)
{
    int v;
    printf("\nNhap gia tri tim kiem: ");
    scanf("%d", &v);
    int result = checkfindValue(arr, n, v);
    if(result){
        printf("\nValue %d co trong arr[%d]\n", v, n);
    }else{
        printf("No to find value in Array");
    }
}
int main()
{
    int n;
    do
    {
        printf("\nNhap phan tu n: ");
        scanf("%d", &n);
    } while (n < 0);
    //
    int *arr = (int *)malloc(n * sizeof(int));
    //
    if (arr == NULL)
    {
        printf("\nNo meet the memory");
        exit(0);
    }
    // function 01
    inArray(arr, n);
    // function 02
    findValue(arr, n);
    //
    free(arr);
}