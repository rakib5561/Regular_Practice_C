#include<stdio.h>
int main(){

    char str1[] = "Hello world";
    char str2[100];

    int len = strlen(str1);
    for(int i=0; i<len; i++){

        str2[i] = str1[i];
    }
    str2[len] = '\0';
    printf("%s ", str2);
    return 0;
}



