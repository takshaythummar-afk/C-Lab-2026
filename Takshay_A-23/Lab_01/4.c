#include<stdio.h>
int main(){
    float f,c;

    printf("Enter the temperature in fehrenheit: ");
    scanf("%f",&f);

    c = (f-32)*5/9;

    printf("Temperature in centigrade = %f",c);
}