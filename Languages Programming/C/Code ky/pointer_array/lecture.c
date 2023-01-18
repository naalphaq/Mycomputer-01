#include <stdio.h>
int main(){
    char arr[] = "morning cafe";
    char *p = arr;
    /*C1
    while (*p != '\0'){//chi can khac gia gia \0 thi in ra giong ngung
        printf("%c", *(p++)-32);//in thuong sang in hoa 
        // arr++ --> khong vi arr la constant pointer not to pointer another 
    }
    */ 

   /*C2
   for(int i = 0; *(arr+i) != '\0', i++){
    printf("%c", *(arr+i) -32);
   }
   */
   for (int i = 0;  p[i] != '\0'; i++){
    printf("%c", p[i] -32);
   }
}