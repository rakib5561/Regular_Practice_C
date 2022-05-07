#include<stdio.h>
int main(){

    int a;
    scanf("%d", &a);

    if(a>0){
        printf("Positive Number\n");
    }
    else if(a<0){
        printf("Negative Number\n");
    }
    else{
        printf("Zero");
    }
    return 0;
}
