#include<stdio.h>
int main(){


    int number_of_user;
    scanf("%d", &number_of_user);

    int rating[number_of_user];

    for(int i=0; i<number_of_user; i++){
        scanf("%d", &rating[i]);
    }

    int sum = 0;
    for(int i =0; i<number_of_user; i++){
        sum = sum + rating[i];
    }

    int count[6] = {0};
    for(int i =0; i<number_of_user; i++){
        int x = rating[i];
        count[x]++;
    }

    for(int i=1; i<=5; i++){
        printf("%d => %d \n", i, count[i]);
    }


    double avg = (double)(sum)/number_of_user;
    printf("Average : %lf", avg);

    return 0;
}
