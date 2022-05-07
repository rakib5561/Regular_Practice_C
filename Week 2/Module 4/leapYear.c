#include<stdio.h>
#include<stdbool.h>

int main(){

    int year;
    scanf("%d", &year);

    bool is_leap_year = (year % 4 == 0) && (year%100 !=0 || year%400==0);

    if(is_leap_year){
        printf("leap Year\n");
    }
    else{
        printf("Not Leap Year\n");
    }

    return 0;
}
