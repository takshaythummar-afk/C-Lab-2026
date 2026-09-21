#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital letter");

    else if (ch >= 'a' && ch <= 'z')
        printf("Small letter");

    else if (ch >= '0' && ch <= '9')
        printf("Digit");

    else
        printf("Another symbol");
}