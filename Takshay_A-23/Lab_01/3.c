#include<stdio.h>
int main(){
    float base,hra,da,gross;

    printf("Enter your base salary : ");
    scanf("%f",&base);

    da = 0.10 * base;
    hra = 0.20 * base;

    gross = base + hra + da;

    printf("DA = %f\n",da);
    printf("HRA = %f\n",hra);
    printf("Gross salary is = %f",gross);
}