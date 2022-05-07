#include<stdio.h>
int main(){

    int number;
    scanf("%d", &number);

    if(number%2==0){
        printf("%d in Even\n", number);
    }
    else{
        printf("Number is Odd\n");
    }

    return 0;
}
