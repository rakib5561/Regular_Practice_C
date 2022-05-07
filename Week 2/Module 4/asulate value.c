#include<stdio.h>
int main(){

    int marks;
    scanf("%d", &marks);

    if(marks < 0){
        marks = -marks;
    }
    printf("Absulate value : %d", marks);

}
