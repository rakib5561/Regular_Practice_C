#include<stdio.h>
int main(){

    int a;

    printf("Enter a Number : ");
    scanf("%d", &a);

    if(a>0){
        printf("%d is Positive Number\n", a);
    }
    else{
        if(a==0){
            printf("%d is Zero\n", a);
        }
        else{
            printf("%d is Negative Number\n", a);
        }

    }



}
