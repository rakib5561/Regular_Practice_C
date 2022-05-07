#include<stdio.h>
int main(){

    int n1,n2;
    scanf("%d %d", &n1, &n2);

    if(n1>n2){
        printf("%d is Maximum Number\n");
    }
    else if (n1<n2){
        printf("%d is Maximum Number\n");
    }
    else{
        printf("%d %d are Equal\n");
    }

    return 0;
}
