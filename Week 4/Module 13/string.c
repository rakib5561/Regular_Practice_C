#include<stdio.h>
int main(){

    printf("Enter your Name : ");

    char name[100];
    gets(name);

    printf("Hello, %s\n", name);


    return 0;
}
