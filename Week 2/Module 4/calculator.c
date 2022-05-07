#include<stdio.h>
int main(){

    int n1, n2,result;
    char op;

    scanf("%d %c %d", &n1, &op, &n2);

    if(op == '+'){
        result = n1 + n2;
    }

    else if(op == '-'){
        result = n1 - n2;
    }

    else if(op == '*'){
        result = n1 * n2;
    }

    else if(op == '/'){
        result = n1 / n2;
    }
    printf("Result :  %d\n", result);

    return 0;
}
