#include<stdio.h>
int main(){
    int n,reversed=0,reminder;

    printf("Enter an integer= ");
    scanf("%d",&n);



    while(n !=0){
        reminder=n %10;
        reversed = reversed*10 + reminder;
        n = n/10;
    }
    printf("The reversed number is=%d",reversed);
    return 0;
}