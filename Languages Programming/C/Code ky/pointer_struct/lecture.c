#include <stdio.h>
#include <string.h>
typedef struct Dog{
    int age;
    char color[10];
    char name[10];//string
}Dog;

int main(){
    Dog myDog = {3, "Yellow", "Cau Vang"};
    //Dog = int
    //myDog --> array
    Dog *p = &myDog;
    printf("\nMy dog name is %s", myDog.name);
    printf("\nMy dog name is %s", p->name);
    printf("\nMy dog name is %s", (*p).name);

    p->age++;
    printf("\nAges after to increase: %d", p->age);
    strcpy(p->name, "Anh Vang");//Thay doi gia tri struct
    printf("\nName: %s", p->name);
}