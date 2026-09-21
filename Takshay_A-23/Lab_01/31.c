#include<stdio.h>
int main(){
    int n,sum=0,reminder;

    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        reminder=n%10;
        sum=sum+reminder;
        n=n/10;
    }
    printf("Sum of digits= %d",sum);
    return 0;
}