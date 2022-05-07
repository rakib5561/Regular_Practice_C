#include<stdio.h>
int main(){

    int n, a, b;
    scanf("%d", &n);


    for(int i=1; i<n; i++){

        scanf("%d %d ",&a, &b);
    }

    for(int i=1; i<n; i++){

        printf("%d %d\n", a, b);
    }

    return 0;
}
