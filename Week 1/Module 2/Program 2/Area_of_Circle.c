#include<stdio.h>
int main(){

    double radius, perimeter, area;
    const double PI = 3.1416;

    printf("Enter Radius : ");
    scanf("%lf", &radius);

    //perimeter calculate
    perimeter = 2 * PI * radius;

    // area calculate
    area = PI * (radius * radius);

    printf("Perimeter : %.2lf\n", perimeter);
    printf("Area Of Circle : %.2lf\n", area);

    return 0;
}
