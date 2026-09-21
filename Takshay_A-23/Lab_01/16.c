#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    if( a>b && a>c)
        printf("Max value is %d",a);

    else if( b>a && b>c)
        printf("Max value is %d",b);

    else
        printf("Max value is %d",c);
}
