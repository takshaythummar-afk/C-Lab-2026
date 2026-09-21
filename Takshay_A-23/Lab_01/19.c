#include<stdio.h>
int main(){
    char ch;

    printf("Enter the character: ");
    scanf("%c",&ch);

    ch >='a' && ch <='b' ? printf("It is small case letter") : printf("It is not small case letter");
    
}