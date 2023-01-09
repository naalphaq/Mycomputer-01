// Nếu dùng fgets()
#include <stdio.h>
int main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); 
    scanf("%d", &age);
    getchar(); // đọc ký tự '\n'
    printf("\nNhap ten: "); 
    fgets(name, sizeof name, stdin);
    printf("%s - %d", name, age);
    //puts(name); --> in ra duoc ten thoi chu k in duoc them so
    
}

// Nếu dùng gets()
// #include <stdio.h>

// int main(){
//     int age;
//     char name[30];
//     printf("\nNhap tuoi: "); scanf("%d", &age);
//     fflush(stdin); // đọc ký tự '\n'
//     printf("\nNhap ten: "); gets(name);
//     printf("%s - %d", name, age);
// }