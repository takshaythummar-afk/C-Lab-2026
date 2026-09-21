#include<stdio.h>
int main(){
    float p,r,t,SI;

    printf("Enter Principal : ");
    scanf("%f",&p);

    printf("Enter Rate : ");
    scanf("%f",&r);

    printf("Enter Time : ");
    scanf("%f",&t);

    SI = (p*r*t)/100;

    printf("The simple interest is: %f",SI);
    
}