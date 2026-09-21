#include<stdio.h>
int main(){
    int n,reversed=0,reminder,original;

    printf("Enter an integer= ");
    scanf("%d",&n);

    original=n;

    while(n !=0){
        reminder=n %10;
        reversed = reversed*10 + reminder;
        n = n/10;
    }

    if(original==reversed){
        printf("It is palindrome number");
    }
    else{
        printf("It is not a palindrome");
    }
}