#include<stdio.h>
int main(){

    int english,math;

    //User input Massage
    printf("Enter your English Marks : ");
    scanf("%d", &english);


    printf("Enter Your Math Marks : ");
    scanf("%d", &math);

    int total = english + math;
    printf("Total Numbers : %d", total);

    return 0;
}
