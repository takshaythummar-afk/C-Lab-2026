#include<stdio.h>
int main(){
    float a,b,result;
    char op;

    printf("Enter first number= ");
    scanf("%f",&a);
    printf("Enter a operater(+,-,*,/)= ");
    scanf(" %c",&op);
    printf("Enter second number= ");
    scanf("%f",&b);

    switch(op)
    {
        case '+':
            result = a+b;
            printf("sum=%f",result);
        break;

        case '-':
            result = a-b;
            printf("substraction=%f",result);
        break;

        case '*':
            result = a*b;
            printf("multiplication=%f",result);
        break;

        case '/':
        if(b != 0){
            result = a/b;
            printf("division=%f",result);}

        else
            printf("Invalid");

        default:
        printf("Invalid operator");

    }
}