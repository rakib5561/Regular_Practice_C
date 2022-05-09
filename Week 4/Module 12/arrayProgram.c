#include<stdio.h>
int main(){

    int mark[5];

    for(int i=0; i<5; i++){
        printf("Enter student %d marks : ", i+1);
        scanf("%d", &mark[i]);
    }

    for(int i=0; i<5; i++){
        printf("Student %d got %d marks\n", i+1, mark[i]);
    }




    return 0;
}

