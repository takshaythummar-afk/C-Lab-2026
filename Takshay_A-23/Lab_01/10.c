#include<stdio.h>
int main(){
    float M,P,C,E,CE;

    printf("Enter your mathematics marks out of 200 = ");
    scanf("%f",&M);

    printf("Enter your physics marks out of 200 = ");
    scanf("%f",&P);

    printf("Enter your chemistry marks out of 200 = ");
    scanf("%f",&C);

    printf("Enter your enterance exam marks out of 100 = ");
    scanf("%f",&E);

    CE = M / 2 + P / 2 + C / 2 + E;
    printf("Cut off marks is = %f",CE);
}