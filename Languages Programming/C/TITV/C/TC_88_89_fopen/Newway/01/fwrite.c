#include <stdio.h>
#include <stdlib.h>
int main(){
  FILE *f;
  char s1[100000]; //doc du lieu can co 1 cai chuoi
  f = fopen("vidu.txt", "r"); //doc va ghi
//   fwrite(s, sizeof(s), 1, f);
//ftell lay ra duoc vi tri con fseek la in ra tu vi tri ftell
  fseek(f, 7, SEEK_SET);//tim duoc diem dau cua file --> Dat con tro o vi tri so 8 va in ra du leu
  fread(s1, sizeof(s1), 1, f);
  printf("%s", s1);
  fclose(f);
}
//Mo du lieu de ghi
//w+: doc va ghi
//a: ghi bo xung --> moi lan chay la no them them them