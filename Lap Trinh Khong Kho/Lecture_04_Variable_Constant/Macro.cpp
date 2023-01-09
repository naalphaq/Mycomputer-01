#include <stdio.h>
#define PI 3.14
#define circle_Area(r)(PI*r*r)
int main(){
    float radius, area;
    printf("Radius = ");
    scanf("%f", &radius);
    area = circle_Area(radius);
    printf("Area = %.2f", area);
    return 0;
}