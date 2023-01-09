#include "stdio.h"
//Rectangle
//triangle
//circle
//--> point

struct point{//struct uses all struct --> A (xA, yA)
	float x;//toa doa x
	float y;//toa do y
};
struct triangle{
	//tam giac ABC --> Can 3 diem a, b, c --> Tao tam giac
	//dung struct poin 
	point a, b, c;
	//input --> A(xA, yA); B(xB, yB); C(xC, yC)
};
struct circle{
	point center;
	float r;
};
struct rectangle{
	point a, b, c, d;
};
struct polygon{
	point ps [100];//mang chua cac dinh da giac
	int n; //so diem cua dinh
	//su dung bo nho dong de cap phat bo nho
	//int *ptr = (int*)malloc(n*sizeof(int)); --> cap phat bo nho dong cho n
};
void inPut(point &i){
	scanf("%d", &i.x);
	scanf("%d", &i.y);
}
void output(point i){
	printf("%d%d",i.x, i.y);
}
int main(){
	point x1;
	triangle x2;
}	


