#include<stdio.h>
int main(){

    int a,b;
    float c,d;

    //intiger input
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    // print result
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", c+d, c-d);

    return 0;
}
