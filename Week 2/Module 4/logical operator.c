#include<stdio.h>
int main(){

    char chr;
    scanf("%c", &chr);

    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == '0' || chr == 'u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }


}
