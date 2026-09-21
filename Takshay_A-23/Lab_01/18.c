#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    a>b && a>c ? printf("Max value %d",a) : 1 ;
    b>a && b>c ? printf("Max value %d",b) : 1 ;
    c>a && c>b ? printf("Max value %d",c) : 1 ;


}